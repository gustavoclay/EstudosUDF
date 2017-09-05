// JavaScript Document

jQuery(document).ready(function() {

    jQuery('#sortables').sortable();

    jQuery('#slideCurso').anythingSlider({		
            hashTags : false,
            buildArrows : false,
            buildStartStop : false,
            autoPlay : true,
            pauseOnHover : false
    });
	
    jQuery('#slider ul').anythingSlider({		
            hashTags : false,
            buildArrows : false,
            buildStartStop : false,
            autoPlay : true
    });
	
	if($(".valorCurso").length > 0){	
		carregaValoresCurso();	
	}
    
});


function carregaParcelasCurso(){
	$.post('?',{
		instituicao: '6',
		periodo: $('select[name="periodo"] option:selected').val(),
		curso: $('input[name="curso_id"]').val(),
		carregaParcelas: true
	},function(data){
		$('select[name="parcela"]').html(data);
	});
}


function carregaValoresCurso(){
	$.post('?',{
		instituicao: '6',
		periodo: $('select[name="periodo"] option:selected').val(),
		parcela: $('select[name="parcela"] option:selected').val(),
		curso: $('input[name="curso_id"]').val(),		
		carregaValores: true
	},function(data){
		$('.valorCurso').html('<b style="color:#0b9395"> '+data+'</b>');
	});
}






function slidePosts(id){
	var imgP = jQuery('#imgPosts' + id).attr('src');
	jQuery('.imgPadrao').attr('src', imgP);
}

function tipoMidia(tipo, id){
	var raiz = jQuery('.raiz').val();
	jQuery('.postBox'+id+' .tipoMidia').val(tipo);
	if(tipo == 'image'){
		jQuery('.postBox'+id+' .legenda').html('<b>IMAGEM</b>');
		jQuery('.postBox'+id+' .blocoLink').show();
		jQuery('.postBox'+id+' .flagMultImg').val('N');
		jQuery('.postBox'+id+' .boxIMG').html('');
		jQuery('.postBox'+id+' .boxTextarea').hide();
		jQuery('.postBox'+id+' .boxIMG').show();
		jQuery('.postBox'+id+' .boxImgSingle').show();
		jQuery('.postBox'+id+' .boxMulti').hide();
		jQuery('.postBox'+id+' .image').attr('src',raiz+'img/foto-ativo.png');
		jQuery('.postBox'+id+' .embed').attr('src',raiz+'img/youtube-inativo.png');
		jQuery('.postBox'+id+' .multi').attr('src',raiz+'img/foto-plus-inativo.png');	
	}
	if(tipo == 'embed'){
		jQuery('.postBox'+id+' .blocoLink').hide();
		jQuery('.postBox'+id+' .legenda').html('<b>EMBED</b>');
		jQuery('.postBox'+id+' .flagMultImg').val('N');
		jQuery('.postBox'+id+' .boxIMG').hide();
		jQuery('.postBox'+id+' .boxImgSingle').show();
		jQuery('.postBox'+id+' .boxMulti').hide();
		jQuery('.postBox'+id+' .boxTextarea').show();
		jQuery('.postBox'+id+' .embed').attr('src',raiz+'img/youtube-ativo.png');
		jQuery('.postBox'+id+' .image').attr('src',raiz+'img/foto-inativo.png');
		jQuery('.postBox'+id+' .multi').attr('src',raiz+'img/foto-plus-inativo.png');
	}
	if(tipo == 'multi'){
		jQuery('.postBox'+id+' .blocoLink').hide();
		jQuery('.postBox'+id+' .flagMultImg').val('S');
		jQuery('.postBox'+id+' .legenda').html('<b>Multiplas Imagens</b>');
		jQuery('.postBox'+id+' .boxIMG').hide();
		jQuery('.postBox'+id+' .boxImgSingle').hide();
		jQuery('.postBox'+id+' .boxMulti').show();
		jQuery('.postBox'+id+' .boxTextarea').show();
		jQuery('.postBox'+id+' .multi').attr('src',raiz+'img/foto-plus-ativo.png');
		jQuery('.postBox'+id+' .embed').attr('src',raiz+'img/youtube-inativo.png');
		jQuery('.postBox'+id+' .image').attr('src',raiz+'img/foto-inativo.png');
	}	
}

function addMultiImg(id){
	var raiz = jQuery('.raiz').val();
	var ultimaLinha = 0;
	var cont = 1;
	jQuery('.postBox'+id+' .multImg tbody').find('tr').each(function(index){
    	jQuery(this).addClass('linhaIMG'+cont);
		ultimaLinha = cont;
		cont++;
    });
	var num = (ultimaLinha+1);
	var caminhoIMG = raiz + 'img/indisponivel.jpg';
	if(cont == 1){
		num = 1;
	}
	var seletor = '.postBox'+id+' .boxMulti tr.novaLinha'+num;
	
	var linha = '<tr class="novaLinha'+num+'"><td align="center">'+num+'<input type="hidden" name="multiMidia['+id+'][]" class="custom_media_url" /></td><td align="center"><img src="'+caminhoIMG+'" width="150" /></td><td align="center"><input type="text" name="multiLink['+id+'][]" /></td><td align="right"><span id="wp-content-media-buttons" class="wp-media-buttons"><a href="#" class="button insert-media add_media" onclick="addMidiaBloco(\''+seletor+'\')" data-editor="content" title="Adicionar M&iacute;dia"><span class="wp-media-buttons-icon"></span>Adicionar M&iacute;dia</a></span> <span id="wp-content-media-buttons" class="wp-media-buttons"><a href="javascript:;" class="button insert-media add_media" onclick="excluirMulti(\'novaLinha'+num+'\',\''+id+'\',\'\')">Excluir</a></span></td></tr>';
	jQuery('.postBox'+id+' .multImg tbody tr.linhaIMG'+ultimaLinha).after(linha);
}

function excluirMulti(linha, id, idArquivo){
	if(idArquivo != ""){
		jQuery.post('?page=box/addBox.php',{
			excluirMulti: true,
			id: idArquivo
		},function(data){
			jQuery('.postBox'+id+' .boxMulti tr.'+linha).fadeOut(function(){
				jQuery(this).remove();
			});
		});
	}else{
		jQuery('.postBox'+id+' .boxMulti tr.'+linha).fadeOut(function(){
			jQuery(this).remove();
		});
	}
}

function add_media(id, tipo){
	
	var tipoPost = '.novos'
	if(tipo == ''){
		var tipoPost = '.atual'
	}
		
	var send_attachment_bkp = wp.media.editor.send.attachment;	
	wp.media.editor.send.attachment = function(props, attachment) {
		
		jQuery(tipoPost+' .box.postbox.postBox'+id+' .boxIMG p').remove('p');
		jQuery(tipoPost+' .box.postbox.postBox'+id+' .boxIMG img').remove('img');
		jQuery('<img src="'+attachment.url+'" width="268" />').appendTo(tipoPost+' .box.postbox.postBox'+id+' .boxIMG');
		jQuery(tipoPost+' .box.postbox.postBox'+id+' .custom_media_url').html(attachment.url);
		/* jQuery('.custom_media_id').val(attachment.id); */
		wp.media.editor.send.attachment = send_attachment_bkp;
	}
	
	wp.media.editor.open();
	return false;       
	
}

function addMidiaBloco(Seletor){
	var send_attachment_bkp = wp.media.editor.send.attachment;	
	wp.media.editor.send.attachment = function(props, attachment) {
				
		jQuery(Seletor + ' img').attr('src',attachment.url);
		jQuery(Seletor +' .custom_media_url').val(attachment.url);
		/* jQuery('.custom_media_id').val(attachment.id); */
		wp.media.editor.send.attachment = send_attachment_bkp;
	}
	
	wp.media.editor.open();
	return false;
}


function mostraBox(id){
	jQuery('.postBox'+id+' .inside').slideToggle();
}


function repetirBloco(){
	jQuery('div.novos .repetidor.box').removeClass('last').removeClass('repetidor');
	var clone = jQuery('.repetidor').clone();
	clone.insertAfter('div.novos .novosBox');
	var totalBox = 0;
	jQuery('div.novos .box').each(function(index){
		totalBox = index;
	});
	
	jQuery('div.novos .repetidor.box').addClass('postBox'+totalBox).show();
	jQuery('div.novos .postBox'+totalBox+' .handlediv').attr('onclick', "mostraBox('"+totalBox+"')");	
	jQuery('div.novos .postBox'+totalBox+' .add_media').attr('onclick', "add_media('"+totalBox+"', 'novos')");
	jQuery('div.novos .postBox'+totalBox+' .selectIMG').attr('onclick', "tipoMidia('image','"+totalBox+"')");
	jQuery('div.novos .postBox'+totalBox+' .selectEMBED').attr('onclick', "tipoMidia('embed','"+totalBox+"')");
	jQuery('#sortables').sortable();
	
}

function selecionaTipo(valor){
	if(valor == 'PAGE'){
		jQuery('p.tipoPost').hide();
		jQuery('p.tipoPage').show();
		jQuery('p.tipoPost select').attr('disabled',"disabled");
		jQuery('p.tipoPage select').removeAttr('disabled');
	}else{
		jQuery('p.tipoPage').hide();
		jQuery('p.tipoPost').show();
		jQuery('p.tipoPage select').attr('disabled',"disabled");
		jQuery('p.tipoPost select').removeAttr('disabled');
	}
}

function abreDuvidas(id){
	jQuery('.pergFre'+id+' #open').slideToggle();
	jQuery('.pergFre'+id+' .tituloFixo img.esconde').slideDown();
}

function abreCurso(valor){
	$('.cur').hide();
	$('.menuInf').removeClass('atual');
	$('#menuInf' + valor).addClass('atual');
	$('.blocoCursos').removeClass('cur');
	$('div#cur' + valor).addClass('cur');
	$('div#cur' + valor).slideDown();
}

function abreProcesso(valor){
	$('.menuPro').removeClass('ultima');
	$('#menuPro' + valor).addClass('ultima');
}

function abrePdf(valor){
	$('div#'+valor).slideToggle();
	$('div#open'+valor).slideToggle();
}

function abreLinkProcesso(valor){
	if(valor == 'Inscreva' || valor == 'Breve'){
		jQuery('p.linkProcesso').hide();
		jQuery('p.linkProcesso').show();
	}	
}

function mudaStatus(status , id){
	
	$.post('/wp-admin/admin.php?page=box/adminCurso.php/',{
		status: status,
		id: id
	}, function(data){
		
	});
/*	$.ajax({
			url: '/adminCurso.php/',
			type: 'POST',
			data: {
				status: $('#addStatus .aberto').val(),	
			},
			success: function() {
				response();
			},
				error:function (xhr, ajaxOptions, thrownError){
					alert(xhr.status);
					alert(thrownError);
				}
		});*/
}

function exportarExcel(selector){
	 	var conteudo = jQuery(selector).html().replace("'"," ");
		jQuery('#contentSubmit').remove();
		jQuery('body').prepend("<form id='contentSubmit' method='post' action='/geraExcel.php' style='display:none;'> <input name='conteudo' type='hidden' value='"+conteudo+"'/> </form>'");	
		jQuery('#contentSubmit').submit();
	}

//Inicio validação e gravação em database FIES - Rafael
function enviaFIES() {
	//alert($("#formFIES .nome").val() + "\n" + $("#formFIES .email").val() + "\n" + $("#formFIES .confirma").val() + "\n" + $("#formFIES .telefone").val() + "\n" + $("#formFIES .celular").val() + "\n" + $("#formFIES .info_fies").val());
    var b = $("#formFIES .nome").val();
    var d = $("#formFIES .email").val();
    var a = $("#formFIES .telefone").val();
    var c = $("#formFIES .ddd").val();
    if (b.length < 3) {
        $(".errorNome").text("Campo obrigatorio");
        $("#formFIES .msg").text("");
        return false
    }else{
        $(".errorNome").text("");
    }
    if (d.length < 3) {
        $(".errorEmail").text("Campo Obrigatorio");
        $("#formFIES .msg").text("");
        return false
    }else{
        $(".errorEmail").text("");
    }
    if (c.length < 1) {
        $(".errorDDD").text("Campo Obrigatorio");
        $("#formFIES .msg").text("");
        return false
    }else{
        $(".errorDDD").text("");
    }
    if (a.length < 3) {
        $(".errorTelefone").text("Campo Obrigatorio");
        $("#formFIES .msg").text("");
        return false
    }else{
        $(".errorTelefone").text("");
    }
    $.post("/ajax/", {
        enviaFIES: true,
        nome: $("#formFIES .nome").val(),
        email: $("#formFIES .email").val(),
        ddd: $("#formFIES .ddd").val(),
        telefone: $("#formFIES .telefone").val(),
        info_fies: $("#formFIES .info_fies:checked").val()
    }, function (a) {
        $("#formFIES .msg").text(a.retorno),
        $("#formFIES .nome").val(""),
        $("#formFIES .email").val(""),
        $("#formFIES .ddd").val(""),
        $("#formFIES .telefone").val("")
    }, "json");
    return false
}
//FIM validação e gravação em database FIES - Rafael

//Inicio validação e gravação em database PROUNI - Rafael
function enviaPROUNI() {
    var b = $("#formPROUNI .nome").val();
    var d = $("#formPROUNI .email").val();
    var a = $("#formPROUNI .telefone").val();
    var c = $("#formPROUNI .ddd").val();
    if (b.length < 3) {
        $(".errorNome").text("Campo obrigatorio");
        $("#formPROUNI .msg").text("");
        return false
    }else{
        $(".errorNome").text("");
    }
    if (d.length < 3) {
        $(".errorEmail").text("Campo Obrigatorio");
        $("#formPROUNI .msg").text("");
        return false
    }else{
        $(".errorEmail").text("");
    }
    if (c.length < 1) {
        $(".errorDDD").text("Campo Obrigatorio");
        $("#formPROUNI .msg").text("");
        return false
    }else{
        $(".errorDDD").text("");
    }
    if (a.length < 3) {
        $(".errorTelefone").text("Campo Obrigatorio");
        $("#formPROUNI .msg").text("");
        return false
    }else{
        $(".errorTelefone").text("");
    }
    $.post("/ajax/", {
        enviaPROUNI: true,
        nome: $("#formPROUNI .nome").val(),
        email: $("#formPROUNI .email").val(),
        ddd: $("#formPROUNI .ddd").val(),
        telefone: $("#formPROUNI .telefone").val()
    }, function (a) {
        $("#formPROUNI .msg").text(a.retorno),
        $("#formPROUNI .nome").val(""),
        $("#formPROUNI .email").val(""),
        $("#formPROUNI .ddd").val(""),
        $("#formPROUNI .telefone").val("")
    }, "json");
    return false
}
//FIM validação e gravação em database PROUNI - Rafael

//Inicio validação e gravação em database PRAVALER - Rafael
function enviaPRAVALER() {
    var b = $("#formPRAVALER .nome").val();
    var d = $("#formPRAVALER .email").val();
    var a = $("#formPRAVALER .telefone").val();
    var c = $("#formPRAVALER .ddd").val();
    if (b.length < 3) {
        $(".errorNome").text("Campo obrigatorio");
        $("#formPRAVALER .msg").text("");
        return false
    }else{
        $(".errorNome").text("");
    }
    if (d.length < 3) {
        $(".errorEmail").text("Campo Obrigatorio");
        $("#formPRAVALER .msg").text("");
        return false
    }else{
        $(".errorEmail").text("");
    }
    if (c.length < 1) {
        $(".errorDDD").text("Campo Obrigatorio");
        $("#formPRAVALER .msg").text("");
        return false
    }else{
        $(".errorDDD").text("");
    }
    if (a.length < 3) {
        $(".errorTelefone").text("Campo Obrigatorio");
        $("#formPRAVALER .msg").text("");
        return false
    }else{
        $(".errorTelefone").text("");
    }
    $.post("/ajax/", {
        enviaPRAVALER: true,
        nome: $("#formPRAVALER .nome").val(),
        email: $("#formPRAVALER .email").val(),
        ddd: $("#formPRAVALER .ddd").val(),
        telefone: $("#formPRAVALER .telefone").val()
    }, function (a) {
    	document.getElementById("formPRAVALER").reset();
        $("#formPRAVALER .msg").text(a.retorno);
    }, "json");
    return false
}
//FIM validação e gravação em database PRAVALER - Rafael

//Inicio validação e gravação em database Bolsa 100% - Rafael
function enviaBolsa() {
    var b = $("#formBolsa .nome").val();
    var d = $("#formBolsa .email").val();
    var a = $("#formBolsa .telefone").val();
    var c = $("#formBolsa .ddd").val();
    if (b.length < 3) {
        $(".errorNome").text("Campo obrigatorio");
        $("#formBolsa .msg").text("");
        return false
    }else{
        $(".errorNome").text("");
    }
    if (d.length < 3) {
        $(".errorEmail").text("Campo Obrigatorio");
        $("#formBolsa .msg").text("");
        return false
    }else{
        $(".errorEmail").text("");
    }
    if (c.length < 1) {
        $(".errorDDD").text("Campo Obrigatorio");
        $("#formBolsa .msg").text("");
        return false
    }else{
        $(".errorDDD").text("");
    }
    if (a.length < 3) {
        $(".errorTelefone").text("Campo Obrigatorio");
        $("#formBolsa .msg").text("");
        return false
    }else{
        $(".errorTelefone").text("");
    }
    $.post("/ajax/", {
        enviaBolsa: true,
        nome: $("#formBolsa .nome").val(),
        email: $("#formBolsa .email").val(),
        ddd: $("#formBolsa .ddd").val(),
        telefone: $("#formBolsa .telefone").val()
    }, function (a) {
        $("#formBolsa .msg").text(a.retorno),
        $("#formBolsa .nome").val(""),
        $("#formBolsa .email").val(""),
        $("#formBolsa .ddd").val(""),
        $("#formBolsa .telefone").val("")
    }, "json");
    return false
}
//FIM validação e gravação em database Bolsa 100% - Rafael

function enviaAviseMePronatec(){
	$.post("/ajax/",{
		enviaAviseMe:true,
		idCurso:$("#formAviseCurPronatec .idCurso").val(),
		idProcessoSeletivo:$("#formAviseCurPronatec .idProcessoSeletivo").val(),
		nome:$("#formAviseCurPronatec .nome").val(),
		email:$("#formAviseCurPronatec .email").val(),
		confirma:$("#formAviseCurPronatec .confirma").val(),
		telefone:$("#formAviseCurPronatec .telefone").val(),
		processoCurso:$("#formAviseCurPronatec .processoCurso").val(),
		flagTipo:$("#formAviseCurPronatec .flagTipo").val()
	},function(a){
		document.getElementById("formAviseCurPronatec").reset();
		$("#formAviseCurPronatec .msg").text(a.retorno)
	},"json");
	return false
}

function aviseMePronatec(){
	$("form#formAviseCurPronatec").dialog({
		autoOpen:true,
		position:"middle",
		draggable:true,
		show:"drop",
		hide:"clip",
		width:800,
		height:"auto",
		bgiframe:true,
		modal:true,
		bgIframe:true,
		title:"Avise-me"
	})
}

function dialogRetorno(valor){
		if(valor == 'RETORNO'){
				$("#dialogRetorno").dialog({
				autoOpen:true,
				position:"middle",
				draggable:true,
				show:"drop",
				hide:"clip",
				width:800,
				height:"auto",
				bgiframe:true,
				modal:true,
				bgIframe:true,
				dialogClass:'retorno retornoOfi',
				title:"Aviso sobre disponibilidade de curso"
			});
		
		}else{
			$("#dialogRetorno").dialog({
				autoOpen:true,
				position:"middle",
				draggable:true,
				show:"drop",
				hide:"clip",
				width:800,
				height:"auto",
				bgiframe:true,
				modal:true,
				bgIframe:true,
				dialogClass:'retorno',
				title:"Aviso sobre disponibilidade de curso"
			});
		}
		
		$("#formRetorno .flagTipo").val(valor);
}

function enviaRetorno(){
	$.post("/ajax/",{
		enviaRetorno:true,
		flagTipo:$("#formRetorno .flagTipo").val(),
		nome:$("#formRetorno .nome").val(),
		email:$("#formRetorno .email").val(),
		celular:$("#formRetorno .celular").val(),
		atual:$("#formRetorno .cAtual").val(),
		interesse:$("#formRetorno .cInteresse").val(),
		campus:$("#formRetorno .campus").val(),
		tempo:$("#formRetorno .tempo").val()
	},function(valor){
		document.getElementById("formRetorno").reset();
		$("#formRetorno .mensagem").text(valor.retorno)
	},"json");
	return false
}

function enviaProcessoSeletivo(){
    var b = $("#formProcessoSeletivo .nome").val();
    var c = $("#formProcessoSeletivo .sobrenome").val();
    var d = $("#formProcessoSeletivo .email").val();
    var e = $("#formProcessoSeletivo .confemail").val();
    var a = $("#formProcessoSeletivo .telefone").val();
    if (b.length < 3) {
        $(".errorNome").text("Campo obrigatorio");
        $("#formProcessoSeletivo .msg").text("");
        return false
    }else{
        $(".errorNome").text("");
    }
    if (c.length < 3) {
        $(".errorSobrenome").text("Campo obrigatorio");
        $("#formProcessoSeletivo .msg").text("");
        return false
    }else{
        $(".errorSobrenome").text("");
    }
    if (a.length < 3) {
        $(".errorTel").text("Campo Obrigatorio");
        $("#formProcessoSeletivo .msg").text("");
        return false
    }else{
        $(".errorTel").text("");
    }
    if (d.length < 3) {
        $(".errorEmail").text("Campo Obrigatorio");
        $("#formProcessoSeletivo .msg").text("");
        return false
    }else{
        $(".errorEmail").text("");
    }
    if (e.length < 3) {
        $(".errorConfEmail").text("Campo Obrigatorio");
        $("#formProcessoSeletivo .msg").text("");
        return false
    }else{
        $(".errorConfEmail").text("");
    }
    if (d != e) {
        $(".errorEmail").text("Campos E-mail e Confirmar o e-mail devem ser iguais");
        $("#formProcessoSeletivo .msg").text("");
        return false
    }else{
        $(".errorEmail").text("");
    }
    $.post('/ajax/', {
        enviaProcessoSeletivo: true,
        nome:$('#formProcessoSeletivo .nome').val(),
        sobrenome:$('#formProcessoSeletivo .sobrenome').val(),
        telefone:$('#formProcessoSeletivo .telefone').val(),
        email:$('#formProcessoSeletivo .email').val(),
        confemail:$('#formProcessoSeletivo .confemail').val(),
    },function(data){
        document.getElementById("formProcessoSeletivo").reset();
        $('#formProcessoSeletivo .msg').text(data.retorno);
            
    },'json');
    
    return false;
}

function abreEnem(){
	jQuery('#numEnem').slideToggle(700);
	return false;	
}


function validaEnem(){
	numEnem = jQuery('#numEnem .texto').val();
	anoEnem = numEnem.substring(0, 4);
	var d = new Date();
	var n = d.getFullYear();
	if(parseInt(anoEnem) < n-3 || parseInt(anoEnem) > n+1){
		jQuery('#numEnem .enemError').html('Digite o número de inscrição do enem corretamente');
		return false;	
	}
	if(jQuery('#numEnem .texto').val().length != 12){
		jQuery('#numEnem .enemError').html('Digite o número de inscrição do enem corretamente');
		return false;	
	}
	jQuery('#numEnem .enemError').html('');
	jQuery('#numEnem').submit();
	
	
}

function validaOuvidoria() {
    var h = true;
    var b = $("#formOuvidoria #assunto option:selected").val();
    var a = $("#formOuvidoria #mensagem").val();
    if (b == "0"){
    	$(".errorAssunto").text("Campo Obrigatorio");
        return false;
    }else{
        $(".errorAssunto").text("");
    }
    if (a.length < 3) {
        $(".errorMensagem").text("Campo Obrigatorio");
        return false;
    }else{
        $(".errorMensagem").text("");
    }
    return true;
};