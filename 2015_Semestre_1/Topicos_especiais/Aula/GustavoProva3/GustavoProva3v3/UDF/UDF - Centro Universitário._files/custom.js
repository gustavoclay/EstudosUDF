/* ---------------------------------------------------------------------------------------------------
	
	Custom JavaScript
	
--------------------------------------------------------------------------------------------------- */

function abrePos(valor){
		$('div.texto.' + valor).slideDown();
		$('div.titulo img.fecha' + valor).removeClass('btnMenos');
		$('img.abre'+valor).addClass('btnMais');
}
function fechaPos(a) {
    $("div.texto." + a).slideUp();
    $("div.titulo img.abre" + a).removeClass("btnMais");
    $(".fecha" + a).addClass("btnMenos")
}
function abrePlano(){
	$('.txtEsp').slideDown();
	$('img.fecha').removeClass('btnMenos');
	$('img.abre').addClass('btnMais');
}

function fechaPlano(){
	$('.txtEsp').slideUp();	
	$('img.abre').removeClass('btnMais');
	$('.fecha').addClass('btnMenos');
}

function abreLetra(a) {
    $("ul.letra." + a).slideToggle()
}

jQuery(document).ready(function($){		
	if($('.galeria').length > 0){
		$('.galeria').cycle({
			fx:     'fade', 
			speed:  'fast', 
			timeout: 0, 
			autostop:true ,	
			next:   '.baixo', 
			prev:   '.cima'
		});
	}
	//direferenciar MAC
	var MAC = (navigator.userAgent.toString().toLowerCase().indexOf("mac")!=-1);
	if(MAC == true){
		$('body').addClass('mac');
		$('#container #content.pg165 h1').addClass('mac');
		$('#container #content.pg1269 h1').addClass('mac');
		$('#container #content.pg1274 h1').addClass('mac');	
		$('#container #header #menuSup li').addClass('mac'); 
	}
	//------------------------------------------------------------------------------//
		
	$('.ui-datepicker-next.ui-corner-all').live('click',function(){
		calendario();
	});
	
	$('.ui-datepicker-prev.ui-corner-all').live('click',function(){
		calendario();
	});
	
	$("#dialog").dialog({autoOpen: false});
	
	$(".opener").click(function() {
		jQuery("input[type='text']").setMask();
		$("#dialog").dialog({
			autoOpen: true,
			position: 'middle',
			draggable: true,
			show: 'drop',
			hide: "clip",
			width: 'auto',
			height: 'auto',
			bgiframe: true,
			modal: true,
			bgIframe: true,
			title: 'Avise-me',	
			show: {
				effect: "toggle"
			},
			hide: {
				duration: 100
			}
		});
    });
	
	setInterval('hideIssu()', 500);
	
	//alinhamento titulo noticias
		var cont = 0;	
		var aux = 0;
		$('#posts').find('.ultimosPosts').each(function(){
			var largura = ($(this).find('.post-title').height());	
			$(this).find('.post-title').addClass('atual');
			if(largura > aux){
				aux = largura;
			}	
			cont++;	
			if(cont > 2){				
				$("#posts .ultimosPosts .post-title.atual").css("height", aux);
				$("#posts .ultimosPosts .post-title").removeClass('atual');
				cont = 0;
				aux = 0;
			}			
		});
	
	
	//alinhamento titulo noticias index
		var b = 0;	
		var v = 0;
		$('#noticiasIndex').find('.notIndex').each(function(){
			var d = ($(this).find('p.titulo').height());	
			$(this).find('p.titulo').addClass('atual');
			if(d > v){
				v = d;
			}	
			b++;	
			if(b > 2){				
				$("#noticiasIndex .notIndex p.titulo.atual").css("height", v);
				$("#noticiasIndex .notIndex p.titulo").removeClass('atual');
				b = 0;
				v = 0;
			}			
		});

	//alinhamento titulo posts mais populares
		var b = 0;	
		var v = 0;
		$('#texto').find('.blProcesso').each(function(){
			var d = ($(this).find('.Processo1').height());	
			$(this).find('.Processo1').addClass('atual');
			if(d > v){
				v = d;
			}	
		b ++;	
		
		if(b > 2){			
			$("#texto .blProcesso .Processo1.atual").css("height", v);
			$("#processoSeletivo .blProcesso .Processo1").removeClass('atual');
			
			b = 0;
			v = 0;
		}
		
		
		
		});

		var b = 0;	
		var v = 0;
		$('#texto').find('.blProcesso').each(function(){
			var d = ($(this).find('.Processo1').height());	
			$(this).find('.Processo11').addClass('atual');
			if(d > v){
				v = d;
			}	
		b ++;	
		
		if(b > 2){			
			$("#texto .blProcesso .Processo11.atual").css("height", v+26);
			$("#processoSeletivo .blProcesso .Processo1").removeClass('atual');
			
			b = 0;
			v = 0;
		}
		
		
		
		});

		var b = 0;	
		var v = 0;
		$('#texto').find('.blProcesso').each(function(){
			var d = ($(this).find('.Processo11').height());	
			$(this).find('.Processo3').addClass('atual');
			if(d > v){
				v = d;
			}	
		b ++;	
		
		if(b > 2){			
			$("#texto .blProcesso .Processo3.atual").css("height", v);
			$("#processoSeletivo .blProcesso .Processo1").removeClass('atual');
			
			b = 0;
			v = 0;
		}
		
		
		
		});
		
		
		
		
		//

	$('#campotxt').val('Busque no UDF').focus(function() { 
		if ($(this).val() == 'Busque no UDF'){
				$(this).val('');
			}
	}).blur(function(){
			if($(this).val() == ''){
				$(this).val('Busque no UDF');
			}
	});
	
	if($('.style').length >0){
	$('.style').selectbox();
	}
	
	$('#sidebar .separator:last:not(:first)').remove();
	
	/* ---------------------------------------------------------------------------------------------------
		Wrapped
	--------------------------------------------------------------------------------------------------- */
	$('.wrapped').mouseenter(function(){
		$(this).stop().animate({ borderTopColor: '#545454', borderLeftColor: '#545454', borderRightColor: '#545454', borderBottomColor: '#545454 ' }, 500);
	}).mouseleave(function(){
		$(this).stop().animate({ borderTopColor: '#eee', borderLeftColor: '#eee', borderRightColor: '#eee', borderBottomColor: '#eee ' }, 500);
	});
	
	/* ---------------------------------------------------------------------------------------------------
		Social
	--------------------------------------------------------------------------------------------------- */
	$('#header-bar-social a').mouseenter(function(){
		$(this).stop().animate({ opacity : 0.5 }, 200);
	}).mouseleave(function(){
		$(this).stop().animate({ opacity : 0.2 }, 200);
	});
	
	
	/* ---------------------------------------------------------------------------------------------------
		Navigation
	--------------------------------------------------------------------------------------------------- */
	if($('ul.sf-menu').length >0){
	$("ul.sf-menu").superfish({
		autoArrows	: false,
		animation	: {height:'show'},
		speed		: 'fast'
	}); 
	}
	
	/* ---------------------------------------------------------------------------------------------------
		Twitter
	--------------------------------------------------------------------------------------------------- */

	var twitter_profile;
	var twitter_amount;
	if($('.recent-tweets').length >0){
	$('.recent-tweets').each(function(){
		
		twitter_profile = $(this).find('input.twitter-profile').val();
		twitter_amount = $(this).find('input.twitter-amount').val();
		
		$(this).tweet({
			username: twitter_profile,
			join_text: 'auto',
			avatar_size: 32,
			count: twitter_amount,
			auto_join_text_default: '', 
			auto_join_text_ed: '',
			auto_join_text_ing: '',
			auto_join_text_reply: '',
			auto_join_text_url: '',
			loading_text: 'Loading tweets...',
			template: '{time}{join}{text}'
		});
	});
	}
	
	/* ---------------------------------------------------------------------------------------------------
		Flickr
	--------------------------------------------------------------------------------------------------- */
	
	var flickr_profile;
	var flickr_amount;

	$('.flickr-stream').each(function(){
		
		flickr_profile = $(this).find('input.flickr-profile').val();
		flickr_amount = $(this).find('input.flickr-amount').val();
		
		$(this).html('');
		
		$(this).jflickrfeed({
			limit: flickr_amount,
			qstrings: { id: flickr_profile },
			itemTemplate: 
			'<li class="flickr-stream-item">' +
				'<a href="{{image_b}}" class="fancybox" rel="group_flicker"><img src="{{image_s}}" alt="{{title}}" /></a>' +
			'</li>'
		});

	});
	
	/* ---------------------------------------------------------------------------------------------------
		Tabs
	--------------------------------------------------------------------------------------------------- */
	$('.tabs-container .tab-content:first-child').siblings('.tab-content').hide();
	$('.tabs-nav li:first-child').addClass('active');
	
	$('.tabs-container .tabs-nav a').live('click', function(e){
		
		e.preventDefault();
		
		$(this).parents('li').addClass('active').siblings('li.active').removeClass('active');
		var tab_id = $(this).parents('li').index();
		$(this).parents('.tabs-container').find('.tab-content').eq(tab_id).show().siblings('.tab-content').hide();
	
	});
	
	jQuery('#menu-item-50 a').live('click', function(e){
		jQuery('#loginAcessoAluno').slideToggle();
		jQuery('.loginAcessoAlunoDois').hide();
	});
	
	
	
	/* ---------------------------------------------------------------------------------------------------
		Scroll to top
	--------------------------------------------------------------------------------------------------- */
	$('#footer-to-top-link').click(function () {
		$('body,html').animate({
			scrollTop: 0
		}, 800);
		return false;
	});
	
	/* ---------------------------------------------------------------------------------------------------
		Lightbox container slider
	--------------------------------------------------------------------------------------------------- */
	$('.portfolio-fancybox-container-inner').each(function(){
		var portfolio_single_slider_autoplay = parseInt($('#portfolio-single-slider-autoplay').val());
		$(this).show();
		$(this).cycle({
			fx:	'fade',
			pager:  '',
			timeout: portfolio_single_slider_autoplay
		});
	});
	
	$('.portfolio-fancybox-action-prev').live('click', function(e){
		
		e.preventDefault();
		$(this).parents('.portfolio-fancybox-container-inner').cycle('prev');
		
	});
	
	$('.portfolio-fancybox-action-next').live('click', function(e){
		
		e.preventDefault();
		$(this).parents('.portfolio-fancybox-container-inner').cycle('next');
		
	});
	
	$('.portfolio-fancybox-actions a').live('mouseenter', function(){
		$(this).stop().animate({ opacity : 1 }); 
	}).live('mouseleave', function(){
		$(this).stop().animate({ opacity : 0.4 });
	});
	
	/* ---------------------------------------------------------------------------------------------------
		Portfolio Slider
	--------------------------------------------------------------------------------------------------- */
	if($('#portfolio-single-slider').length > 0){
	$('#portfolio-single-slider').cycle({
		fx:	'fade',
		pager:  '#portfolio-single-slider-nav',
		timeout: 0
	});
	}
	$('#portfolio-single-slider-prev').live('click', function(e){
		
		e.preventDefault();
		$('#portfolio-single-slider').cycle('prev');
		
	});
	
	$('#portfolio-single-slider-next').live('click', function(e){
		
		e.preventDefault();
		$('#portfolio-single-slider').cycle('next');
		
	});
	
	/* --------------------------------------------------
		Portfolio - Filter - Quicksand
	-------------------------------------------------- */
	$('#portfolio-filter a').click(function(e) {
		e.preventDefault();  
		$('.portfolio-filter-active').removeClass('portfolio-filter-active');
		$(this).addClass('portfolio-filter-active');
		$.get( $(this).attr('href'), function(data) {
			$('.portfolio-quicksand').quicksand( $(data).find('li'), { adjustHeight: 'dynamic' }, function(){
				
				$('a.fancybox').prettyPhoto({
					show_title : false
				});
				
				$('.portfolio-fancybox-container-inner').each(function(){
					$(this).show();
					$(this).cycle({
						fx:	'fade',
						pager:  '',
						timeout: 0
					});
				});
				
			});
		});  
	});
	
	
	/* ---------------------------------------------------------------------------------------------------
		Fancybox
	--------------------------------------------------------------------------------------------------- */
	$('#posts-slider a.fancybox').each(function(){
		
		var rel_attr = $(this).attr('rel');
		rel_attr = 'posts_slider_' + rel_attr;
		
		$(this).attr('rel', rel_attr);
		
	});
	
	$('#content a.fancybox').each(function(){
		
		var rel_attr = $(this).attr('rel');
		rel_attr = 'content_' + rel_attr;
		
		$(this).attr('rel', rel_attr);
		
	});
	
	if($('a.fancybox').length>0){
	$('a.fancybox').prettyPhoto({
		show_title : false
	});
	}
	
	$('.portfolio-fancybox-init').live('click', function(e){
		
		e.preventDefault();
		$(this).parents('.portfolio-post-entry ').find('.portfolio-fancybox-container a:first').click();
		
	});

	
	/* ---------------------------------------------------------------------------------------------------
		Contact Form
	--------------------------------------------------------------------------------------------------- */
	$('.contact-form form').submit(function(e){
	
		e.preventDefault();
		
		var submit_path = $(this).attr('action');
		
		var name = $(this).find('.contact-form-name');
		var email = $(this).find('.contact-form-email');
		var message = $(this).find('.contact-form-message');
		
		var status = true;
		
		name.removeClass('contact-form-invalid');
		email.removeClass('contact-form-invalid');
		message.removeClass('contact-form-invalid');
		
		if(name.val() == ''){
			name.addClass('contact-form-invalid');
			status = false;
		}
		
		if(email.val() == ''){
			email.addClass('contact-form-invalid');
			status = false;
		}
		
		if(message.val() == ''){
			message.addClass('contact-form-invalid');
			status = false;
		}
		
		if(status == true){
			
			$(this).parents('.contact-form').load(submit_path, $(this).serialize());
			
		}
	
	});
	
	/* ---------------------------------------------------------------------------------------------------
		Toggle
	--------------------------------------------------------------------------------------------------- */
	
	$('.content-box-toggle').each(function(){
		
		var content_box = $(this).parents('.content-box');
		
		$(this).height($(this).height());
		
		if(content_box.hasClass('content-box-toggle-state-closed')){
			content_box.addClass('content-box-toggle-closed');
			content_box.find('.content-box-content').hide();
		}else{
			content_box.addClass('content-box-toggle-open');
		}		
		
	});
	
	$('.content-box-toggle-open .content-box-toggle').live('click', function(e){
		
		e.preventDefault();
		
		var content_box = $(this).parents('.content-box');
		content_box.find('.content-box-content').slideUp(200);
		
		content_box.removeClass('content-box-toggle-open').addClass('content-box-toggle-closed');
		
	});
	
	$('.content-box-toggle-closed .content-box-toggle').live('click', function(e){
		
		e.preventDefault();
		
		var content_box = $(this).parents('.content-box');
		content_box.find('.content-box-content').slideDown(200);
		
		content_box.removeClass('content-box-toggle-closed').addClass('content-box-toggle-open');
		
	});
	
	/* ---------------------------------------------------------------------------------------------------
		Search
	--------------------------------------------------------------------------------------------------- */
	$('input[name="s"]').focus(function(){
		
		var search_text = $(this).val();
		var search_alt = $(this).attr('alt');
		
		if(search_text == search_alt){
			$(this).val('');
		}
		
	});
	
	$('input[name="s"]').blur(function(){
		
		var search_text = $(this).val();
		var search_alt = $(this).attr('alt');
		
		if(search_text == ''){
			$(this).val(search_alt);
		}
		
	});
	
	/* ---------------------------------------------------------------------------------------------------
		Posts Slider Hover Animation
	--------------------------------------------------------------------------------------------------- */
	$('#posts-slider .post-entry-special').mouseenter(function(){
		$(this).stop().animate({ marginTop : 0 }, 100);
	}).mouseleave(function(){
		$(this).stop().animate({ marginTop : 10 }, 100);
	});

	/* ---------------------------------------------------------------------------------------------------
		Tamanho Processo Seletivo
	--------------------------------------------------------------------------------------------------- */
	var b = 0;
	var v = 0;
	$("#texto").find(".titProcesso").each(function () {
	    var d = ($(this).find(".contProcesso").height());
	    jQuery(this).find(".Processo1").addClass("atual");
	    if (d > v) {
	        v = d
	    }
	    b++;
	    if (b > 2) {
	        jQuery(".blProcesso .titProcesso .Processo1.atual").css("height", v);
	        jQuery(".blProcesso .titProcesso .Processo1").removeClass("atual");
	        b = 0;
	        v = 0
	    }
	});
	var b = 0;
	var v = 0;
	jQuery("#texto").find(".blProcesso").each(function () {
	    var d = (jQuery(this).find(".contProcesso").height());
	    e(this).find(".Processo11").addClass("atual");
	    if (d > v) {
	        v = d
	    }
	    b++;
	    if (b > 2) {
	        jQuery("#texto .blProcesso .Processo11.atual").css("height", v+33);
	        jQuery("#texto .blProcesso .Processo11").removeClass("atual");
	        b = 0;
	        v = 0
	    }
	});
	var b = 0;
	var v = 0;
	jQuery("#texto").find(".blProcesso").each(function () {
	    var d = (jQuery(this).find(".Processo11").height());
	    jQuery(this).find(".Processo3").addClass("atual");
	    if (d > v) {
	        v = d
	    }
	    b++;
	    if (b > 2) {
	        jQuery("#texto .blProcesso .Processo3.atual").css("height", v);
	        jQuery("#texto .blProcesso .Processo3").removeClass("atual");
	        b = 0;
	        v = 0
	    }
	});
	
});

jQuery(window).load(function(){
	
	/* ---------------------------------------------------------------------------------------------------
		Accordion
	--------------------------------------------------------------------------------------------------- */
	if(jQuery('#accordion').length){
		
		var accordion_width = jQuery('#accordion').width();
		var accordion_spacing = 5;
		var accordion_item_amount = jQuery('#accordion-inner li').length;
		var accordion_item_width = accordion_width / accordion_item_amount - (accordion_spacing - (accordion_spacing / accordion_item_amount));
		
		jQuery('#accordion-inner li').css({ 'width' : accordion_item_width });
		
		jQuery('#accordion-inner').kwicks({  
			max : 593,  
			spacing : accordion_spacing  
		});
		
		jQuery('#slider-load').fadeOut(400, function(){
			
			jQuery('#accordion-inner').fadeIn(400);
			var accordion_height = jQuery('#accordion-inner img').height();
			jQuery('#accordion-inner').height(accordion_height);
			
		});
		
		jQuery('#accordion-inner li').mouseenter(function(){
			jQuery(this).find('.accordion-slide-info').stop().animate({ opacity : 1 }, 500);
		}).mouseleave(function(){
			jQuery(this).find('.accordion-slide-info').stop().animate({ opacity : 0 }, 500);
		});
	
	}
	
	
	function header_slider_before(curr, next, opts, fwd) {
		
		var index = opts.currSlide;
		//get the height of the current slide
		var $ht = jQuery(this).height();
		//set the container's height to that of the current slide
		jQuery(this).parent().animate({height: $ht}, 200);
		
		/* Change active element */
		if(fwd == true){
			var current_item = jQuery('.active-slider-nav-item').attr('jcarouselindex');
			if(current_item > 2){ jQuery('#slider-nav-container .jcarousel-next').click(); }
			jQuery('.active-slider-nav-item').removeClass('active-slider-nav-item').next('li').addClass('active-slider-nav-item').find('img').stop().animate({ opacity : 1 }, 400).parents('li').siblings('li').find('img').stop().animate({ opacity : 0.4 }, 400);
		}else{
			jQuery('.active-slider-nav-item').removeClass('active-slider-nav-item').prev('li').addClass('active-slider-nav-item').find('img').stop().animate({ opacity : 1 }, 400).parents('li').siblings('li').find('img').stop().animate({ opacity : 0.4 }, 400);
		}
		
	}
	
	if(jQuery('#posts-slider').length){
	
		jQuery('#slider-prev, #slider-next').show();
	
		jQuery('#slider-load').animate({opacity : 0, height : 0}, 500, function(){
			
			jQuery('#posts-slider').animate({ height : jQuery('#slider-inner').height() }, 500, function(){
			
				jQuery('#slider-inner').fadeIn(500, function(){
					
					if(jQuery('#posts-slider').length){
					
						if(jQuery('#posts-slider .one-half').length){
							
							if(jQuery('#posts-slider .one-half').length > 2){
								
								jQuery('#posts-slider #slider-next').animate({ opacity : 1, right : -70 }, 200);
								jQuery('#posts-slider #slider-prev').animate({ opacity : 1, left : -70 }, 200);
								
							}
							
						}else if(jQuery('#posts-slider .one-third').length){
						
							if(jQuery('#posts-slider .one-third').length > 3){
								
								jQuery('#posts-slider #slider-next').animate({ opacity : 1, right : -70 }, 200);
								jQuery('#posts-slider #slider-prev').animate({ opacity : 1, left : -70 }, 200);
								
							}
						
						}else if(jQuery('#posts-slider .one-fourth').length){
							
							if(jQuery('#posts-slider .one-fourth').length > 4){
								
								jQuery('#posts-slider #slider-next').animate({ opacity : 1, right : -70 }, 200);
								jQuery('#posts-slider #slider-prev').animate({ opacity : 1, left : -70 }, 200);
								
							}
							
						}
						
					}
					
				});
				
				jQuery('#posts-slider .portfolio-fancybox-container-inner').each(function(){
					jQuery(this).show();
					jQuery(this).cycle({
						fx:	'fade',
						pager:  '',
						timeout: 0
					});
				});
				
			});
			
		});
		
	}else if(jQuery('#slider').length){
		
		/*jQuery('#slider-nav-prev, #slider-nav-next').css({ opacity : 0.5 });
		
		jQuery('#slider-nav-prev, #slider-nav-next').mouseenter(function(){
			jQuery(this).stop().animate({ opacity : 1 }, 400);
		}).mouseleave(function(){
			jQuery(this).stop().animate({ opacity : 0.5 }, 400);
		});
		
		jQuery('#slider').css({ 'background-image' : 'none' });
		
		jQuery('#slider-inner').height(1).show();
	
		var top_slider_autoplay_speed = parseInt(jQuery('#top-slider-autoplay-speed').val());
	
		jQuery('#slider #slider-inner').cycle({
			fx:	'scrollHorz',		
			timeout: top_slider_autoplay_speed,
			before: header_slider_before,
			speed: 300,
			pager:  '#slider-nav', 
			pagerAnchorBuilder: function(idx, slide) { 
				// return selector string for existing anchor 
				return '#slider-nav li:eq(' + idx + ') a'; 
			} 
		});
		
		jQuery('#slider-nav-container').show();
		jQuery('#slider-nav').jcarousel({
			scroll : 1,
			wrap : 'circular'
		});*/
		
	}else if(jQuery('#accordion').length){
		
		
		
	}
	
	/* ---------------------------------------------------------------------------------------------------
		Header Slider
	--------------------------------------------------------------------------------------------------- */
	
	var jcarousel_wrap = jQuery('#posts-slider-wrap').val();
	var jcarousel_item_width = jQuery('#slider-inner li').outerWidth(true);
	jQuery('#posts-slider #slider-inner').jcarousel({
		itemFallbackDimension : jcarousel_item_width,
		scroll : 1,
		wrap : jcarousel_wrap
	});
	
	jQuery('#slider-nav li:first').addClass('active-slider-nav-item');
	
	jQuery('#slider-nav li:not(.active-slider-nav-item)').live('mouseenter', function(){
		jQuery(this).find('img').stop().animate({ opacity : 0.8 }, 400);
	}).live('mouseleave', function(){
		jQuery(this).find('img').stop().animate({ opacity : 0.5 }, 400);
	});	
	
	jQuery('#slider-nav li').live('click', function(){
		
		jQuery('.active-slider-nav-item').removeClass('active-slider-nav-item');
		jQuery(this).addClass('active-slider-nav-item').find('img').stop().animate({ opacity : 1 }, 400);;
		jQuery(this).siblings('li').find('img').stop().animate({ opacity : 0.5 }, 400);
		
	});
	
	jQuery('#slider-container #slider-prev').live('click', function(e){
		
		e.preventDefault();
		jQuery('#slider-inner').cycle('prev');
		jQuery('#slider-nav-container .jcarousel-prev').click();
		
	});
	
	jQuery('#slider-container #slider-next').live('click', function(e){
		
		e.preventDefault();
		jQuery('#slider-inner').cycle('next');
		jQuery('#slider-nav-container .jcarousel-next').click();
		
	});
	
	jQuery('#posts-slider #slider-prev').live('click', function(e){
		
		e.preventDefault();
		jQuery('.jcarousel-prev').click();
		
	});
	
	jQuery('#posts-slider #slider-next').live('click', function(e){
		
		e.preventDefault();
		jQuery('.jcarousel-next').click();
		
	});
	
	jQuery('#slider-nav-prev').live('click', function(e){
		
		jQuery('#slider-nav-container .jcarousel-prev').click();
		e.preventDefault();
		
	});
	
	jQuery('#slider-nav-next').live('click', function(e){
		
		e.preventDefault();
		jQuery('#slider-nav-container .jcarousel-next').click();
		
	});
	
	/* ---------------------------------------------------------------------------------------------------
		Flickr fancybox
	--------------------------------------------------------------------------------------------------- */
	jQuery(".flickr-stream a.fancybox").prettyPhoto({
		show_title : false
	});
	
	/* ---------------------------------------------------------------------------------------------------
		Testimonials
	--------------------------------------------------------------------------------------------------- */
	jQuery('.testimonials-scroller').each(function(){
		var testimonials_delay = jQuery(this).parents('.testimonials-scroller-container').find('input.testimonials-delay').val();
		jQuery(this).show();
		jQuery(this).cycle({
			fx:	'fade',		
			timeout: testimonials_delay
		});
	});
	
	/* ---------------------------------------------------------------------------------------------------
		Slider Posts
	--------------------------------------------------------------------------------------------------- */
	jQuery('.slider-posts-widget-container').each(function(){
		jQuery(this).show();
		var slider_posts_widget_speed = parseInt(jQuery(this).parents('.jw-slider-posts-widget').find('input.slider-posts-widget-speed').val());
		jQuery(this).cycle({
			fx:	'scrollHorz',		
			timeout: slider_posts_widget_speed,
			speed: 300
		});
	});
	
	jQuery('.slider-posts-prev').live('click', function(e){
		
		e.preventDefault();
		jQuery(this).parents('.jw-slider-posts-widget').find('.slider-posts-widget-container').cycle('prev');
		
	});
	
	jQuery('.slider-posts-next').live('click', function(e){		
		e.preventDefault();
		jQuery(this).parents('.jw-slider-posts-widget').find('.slider-posts-widget-container').cycle('next');		
	});

	

});

function mostraDtEvento(dt){
	var ano = jQuery(dt).attr('data-year');
	var mes = jQuery(dt).attr('data-month');
	mes = parseInt(mes) + parseInt(1);
	var dia = jQuery('.ui-datepicker-current-day .ui-state-default').text();
	
	if(mes <= 9){
		mes = '0'+String(mes);
	}
	
	if(dia <= 9){
		dia = '0'+String(dia);
	}
	
	var dtSelect = ano+'-'+mes+'-'+dia;
	selectDataEvento(dtSelect);
	
	jQuery('table.ui-datepicker-calendar tbody tr td').each(function(){
		jQuery(this).attr('onclick','mostraDtEvento(this)');
	});	
	calendario();
}


function selectDataEvento(dtSelect){	
	var proxEventos = '';
	
	var contIG = 0;
	var contMA = 0;
	var contME = 0;
	
	var menores = new Array();
	var maiores = new Array();
	var igual = new Array();
			
	$('#contNoticias ul').find('li').each(function() {
    	var dtEvento = $(this).attr('class');
				
		if(dtEvento > dtSelect){
			menores[contME] = dtEvento;
			contME++;
		}else if(dtEvento == dtSelect){
			igual[contIG] = dtEvento;
			contIG++;
		}else{
			maiores[contMA] = dtEvento;
			contMA++;
		}
		$(this).css('display','none').css('opacity','0').css('z-index','0');		
    });
	
	menores.sort();
	maiores.reverse();
	igual.sort();	
	
	if(igual.length > 0){
		$('#contNoticias ul .'+igual[0]).css('display','block').css('opacity','1').css('z-index','4');
	}else{
		if(maiores.length > 0){
			$('#contNoticias ul .'+maiores[0]).css('display','block').css('opacity','1').css('z-index','4');
		}else{
			$('#contNoticias ul .'+menores[0]).css('display','block').css('opacity','1').css('z-index','4');
		}
	}	
}


$(function() {
    jQuery('.datepicker').datepicker( { prevText: "", nextText: ""});
	$( '.datepicker' ).datepicker( "option", "monthNames", [ "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro" ] );
	$( '.datepicker' ).datepicker( "option", "dayNamesMin", [ "Do", "Se", "Te", "Qua", "Qui", "Se", "Sa" ] );
	
	jQuery('table.ui-datepicker-calendar tbody tr td').each(function(){
		jQuery(this).attr('onclick','mostraDtEvento(this)');
	});
	
	jQuery('.ui-datepicker-prev').live('click',function(){
		jQuery('table.ui-datepicker-calendar tbody tr td').each(function(){
			jQuery(this).attr('onclick','mostraDtEvento(this)');
		});
	});
	
	jQuery('.ui-datepicker-next').live('click',function(){
		jQuery('table.ui-datepicker-calendar tbody tr td').each(function(){
			jQuery(this).attr('onclick','mostraDtEvento(this)');
		});
	});
	
	hoje = new Date()
	dia = hoje.getDate()
	mes = hoje.getMonth()
	ano = hoje.getFullYear()
	if (dia < 10){
		dia = "0" + dia;
	}	
	mes = 1 + mes;
	if (mes < 10){
		mes = "0" + mes;
	}
	
	var dataHoje = ano+'-'+mes+'-'+dia;	
	selectDataEvento(dataHoje);
	calendario();
	
  });
  
  function abreForm (){
	$('#formComentario').slideToggle();
}


function blackboard(valor){		
	$('#blackboard .bloco').hide();
	$('#blackboard .bloco'+valor).slideToggle();		
}

function completeCurso(){
	
	jQuery("#campotxt").autocomplete({
		source: function(request, response) {
			jQuery.ajax({
				url: '/ajax/',
				dataType: "json",
				data: {
					flagCurso	: true,
					term : request.term
				},
				success: function(data) {
					response(data);
				},
				
			});
		},
		select: function(item, ui){
			jQuery('#campotxt').val(ui.item.label);
			jQuery('.search-form').submit();
		}
	});
	
}

function enviaAviseMe(){
	$.post('/ajax/',{
		enviaAviseMe: true,
		idCurso: $('#formAvise .idCurso').val(),
		idProcessoSeletivo: $('#formAvise .idProcessoSeletivo').val(),
		nome: $('#formAvise .nome').val(),
		email: $('#formAvise .email').val(),
		telefone: $('#formAvise .telefone').val(),
		confirma: $('#formAvise .confirma').val(),
		endereco: $('#formAvise .endereco').val(),
		processoCurso: $('#formAvise .processoCurso').val()
	},function(data){
		jM.info(data.retorno,'300','145',function(){
			$('.alertDialog').remove();
			});
	},'json');
	
	return false;
}


function dialogProcessoSeletivo(valor){
	
		$("#dialog").dialog({
			autoOpen: true,
			position: 'middle',
			draggable: true,
			show: 'drop',
			hide: "clip",
			width: 'auto',
			height: 'auto',
			bgiframe: true,
			modal: true,
			bgIframe: true,
			title: 'Avise-me',	
			show: {
				effect: "toggle"
			},
			hide: {
				duration: 100
			}
		});	
		
		$('#formAvise .idProcessoSeletivo').val(valor);
}

function aviseProcesso(){
$.post('/ajax/',{
		enviaAviseMe: true,
		idCurso: $('#formAvise .idCurso').val(),
		idProcessoSeletivo: $('#formAvise .idProcessoSeletivo').val(),
		nome: $('#formAvise .nome').val(),
		email: $('#formAvise .email').val(),
		telefone: $('#formAvise .telefone').val(),
		confirma: $('#formAvise .confirma').val(),
		endereco: $('#formAvise .endereco').val()

	},function(data){
		jM.info(data.retorno,'300','145',function(){
			$('.alertDialog').remove();
			});
	},'json');
	return false;

}

function dialog(data, title){
	$('<div id="dialogWindow">'+data+'</div>').dialog({ 
		autoOpen: true,
		position: 'middle',
		draggable: true,
		show: 'drop',
		hide: "clip",
		width: 800,
		height: 'auto',
		bgiframe: true,
		modal: true,
		bgIframe: true,
		title: 'UDF - '+ title,
		close: function (event, ui) { 
			$("#dialogWindow").remove(); 
		}
	});
}

function calendario(){	
	var evento = '';
	$('ul#fade > li').each( function(index) {
		evento = $(this).attr('class');
	
		var aux = evento.split("-");		
		var ano = aux[0];
		var mes = aux[1];
		var dia = aux[2];
		
		$('table.ui-datepicker-calendar').find('td').each( function() {
			mesCalendario = $(this).attr('data-month');
			anoCalendario = $(this).attr('data-year');
			diaCalendario = $(this).find('a').text();
			
			if (diaCalendario < 10){
				diaCalendario = "0" + diaCalendario;
			}
				
			mesCalendario = 1 + parseInt(mesCalendario);
			if (mesCalendario < 10){
				mesCalendario = "0" + mesCalendario;
			}		
			
			if(anoCalendario == ano){				
				if(mesCalendario == mes){
					if(diaCalendario == dia){
						$(this).addClass('temEvento');
					}
				}
			}			
			
		});
		
	});	
}

function hideIssu(){
	$('div.issuuembed').find('div span').each(function(){
		$(this).remove();
	}); 
}

function abreCon(valor){
	jQuery('.cur').hide();
	jQuery('#cont' + valor).slideDown();	
	jQuery('.bMnu').removeClass('atual');
	jQuery('#bMnu'+valor).addClass('atual');
}

function abreCurso(a) {
    jQuery('.cur').hide();
    jQuery('div.cursos #' + a).slideDown();
    jQuery('.menuInf').removeClass('atual');
    jQuery('#menuInf' + a).addClass('atual')
}

function enviaPronatec(){
	var b = $("#formPronatec .nome").val();
    var d = $("#formPronatec .email").val();
    var a = $("#formPronatec .tel").val();
    if (b.length < 3) {
        $(".errorNome").text("Campo obrigatorio");
        $("#formPronatec .msg").text("");
        return false
    }else{
        $(".errorNome").text("");
    }
    if (a.length < 3) {
        $(".errorTel").text("Campo Obrigatorio");
        $("#formPronatec .msg").text("");
        return false
    }else{
        $(".errorTel").text("");
    }
    if (d.length < 3) {
        $(".errorEmail").text("Campo Obrigatorio");
        $("#formPronatec .msg").text("");
        return false
    }else{
        $(".errorEmail").text("");
    }
	$.post('/ajax/', {
		enviaPronatec: true,
		nome:$('#formPronatec .nome').val(),
		telefone:$('#formPronatec .tel').val(),
		email:$('#formPronatec .email').val(),
	},function(data){
		document.getElementById("formPronatec").reset();
		$('#formPronatec .msg').text(data.retorno);
			
	},'json');
	
	return false;
}

function validaForm() {
    var h = true;
    var b = $("#nome").val();
    var f = $('#cpf').val();
    var d = $("#email").val();
    var e = $("#conf_email").val();
    var c = $("#ddd").val();
    var a = $("#telefone").val();
    var g = $("#mensagem").val();
    var i = $("#ninja_forms_field_8").val();
    if (b.length < 3) {
        $(".errorNome").text("Campo obrigatorio");
        return false
    }else{
        $(".errorNome").text("");
    }
    if (f.length < 3) {
        $(".errorCPF").text("Campo obrigatorio");
        return false
    }else{
        $(".errorCPF").text("");
    }
    if (c.length < 1) {
        $(".errorDDD").text("Campo Obrigatorio");
        return false
    }else{
        $(".errorDDD").text("");
    }  
    if (a.length < 3) {
        $(".errorTelefone").text("Campo Obrigatorio");
        return false
    }else{
        $(".errorTelefone").text("");
    }
    if (d.length < 3) {
        $(".errorEmail").text("Campo Obrigatorio");
        return false
    }else{
        $(".errorEmail").text("");
    }
    if (e.length < 3) {
        $(".errorConfEmail").text("Campo Obrigatorio");
        return false
    }else{
        $(".errorConfEmail").text("");
    }
    if (d != e) {
        $(".errorConfEmail").text("Campos Email e Confirmação de Email devem ser iguais");
        return false
    }else{
        $(".errorConfEmail").text("");
    }
    if (i == "0" || i == "" || i == null || i[0] == "0"){
        $(".errorAssunto").text("Selecione um assunto");
        $("#ninja_forms_field_8").val("");
        return false
    }else{
        $(".errorAssunto").text("");
    }
    if (g.length < 3) {
        $(".errorMensagem").text("Campo Obrigatorio");
        return false
    }else{
        $(".errorMensagem").text("");
    }    
    $.post('/ajax/', {
        enviaGravaFale: true,
        nome:$('#nome').val(),
        cpf:$('#cpf').val(),
        telefone:$('#telefone').val(),
        email:$('#email').val(),
        assunto:$('#ninja_forms_field_8 option:selected').val(),
        mensagem:$('#mensagem').val()
    },'json');
    return true
};

/* Rafael - 16/01/2015 */
function dialogEC(a, b){
		$("#dialogEC").dialog({
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
			title:"Educação Corporativa - " + b
		});
		$('#formEC .interesse').val(a);
		if(a != '0'){
			jQuery('#formEC').find('.msg_info').hide();
		}
}

/* Início Máscaras ER */
/*function mascaraCEP(o, f) {
    v_obj = o
    v_fun = f
    setTimeout("execmascaraCEP()", 1)
}

function execmascaraCEP() {
    v_obj.value = v_fun(v_obj.value)
}

function mCEP(v) {
    v = v.replace(/\D/g, ""); //Remove tudo o que não é dígito
    v = v.replace(/(\d)(\d{3})$/, "$1-$2"); //Coloca hífen entre o terceiro e o quarto dígitos
    return v;
}*/

function mascaraFunc(o, f) {
    v_obj = o
    v_fun = f
    setTimeout("execmascaraFunc()", 1)
}

function execmascaraFunc() {
    v_obj.value = v_fun(v_obj.value)
}

function mFunc(v) {
    v = v.replace(/\D/g, ""); //Remove tudo o que não é dígito
    return v;
}

window.onload = function () {
    /*id('cep').onkeypress = function () {
        mascaraCEP(this, mCEP);
    }*/
    id('funcionarios').onkeypress = function () {
        mascaraCEP(this, mFunc);
    }
    /*id('telefone').onkeypress = function () {
        mascara(this, mtel);
    }*/
}

/* FIM Máscaras ER */

function enviaEC(){
	var a = $("#formEC #interesse option:selected").val();
	var b = $("#formEC #empresa").val();
	var c = $("#formEC #cnpj").val();
    var d = $("#formEC #nome").val();
    var e = $("#formEC #cargo").val();
    var f = $("#formEC #funcionarios").val();
    var g = $("#formEC #segmento").val();
    var h = $("#formEC #endereco").val();
    var i = $("#formEC #bairro").val();
    var j = $("#formEC #cidade").val();
    var k = $("#formEC #cep").val();
    var l = $("#formEC #telefone").val();
    var m = $("#formEC #email").val();
    var n = $('input[name="info"]:checked', '#formEC').val();
    if (a == "0") {
        $(".msg").text("Selecione um interesse!");
        return false
    }else{
        $(".msg").text("");
    }
    if (b.length < 3) {
        $(".msg").text("Campo 'Empresa' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (d.length < 3) {
    	$(".msg").text("Campo 'Nome completo do contato' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (h.length < 3) {
        $(".msg").text("Campo 'Endereco da empresa' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (i.length < 3) {
        $(".msg").text("Campo 'Bairro' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (j.length < 3) {
        $(".msg").text("Campo 'Cidade' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (k.length < 3) {
        $(".msg").text("Campo 'CEP' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (l.length < 3) {
        $(".msg").text("Campo 'Telefone comercial' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (m.length < 3) {
        $(".msg").text("Campo 'E-mail' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
	$.post('/ajax/', {
		enviaEC: true,
		interesse:$("#formEC #interesse option:selected").val(),
		empresa:$('#formEC .empresa').val(),
		cnpj:$('#formEC .cnpj').val(),
		nome:$('#formEC .nome').val(),
		cargo:$('#formEC .cargo').val(),
		funcionarios:$('#formEC .funcionarios').val(),
		segmento:$('#formEC .segmento').val(),
		endereco:$('#formEC .endereco').val(),
		bairro:$('#formEC .bairro').val(),
		cidade:$('#formEC .cidade').val(),
		cep:$('#formEC .cep').val(),
		telefone:$('#formEC .telefone').val(),
		email:$('#formEC .email').val(),
		info:$('input[name="info"]:checked', '#formEC').val()
	},function(data){
		document.getElementById("formEC").reset();
		$('#formEC .msg').text(data.retorno);
			
	},'json');
	
	return false;
}

function dialogAE(a, b){
		$("#dialogAE").dialog({
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
			title:"Apresentação de Escolas - " + b
		});
		if(a == '0'){
			jQuery('#formAE').find('.tipoPrograma0').show();
			jQuery('#formAE').find('.tipoPrograma1').hide();
		}else{
			jQuery('#formAE').find('.tipoPrograma0').hide();
			jQuery('#formAE').find('.tipoPrograma1').show();
		}
}

function dialogAEdif(a, b){
		$("#dialogAEdif").dialog({
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
			title:"Apresentação de Escolas - " + b
		});
		$('#formAEdif .interesse').val(a);
}

function dialogAEestagios(a, b){
		$("#dialogAEestagios").dialog({
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
			title:"Apresentação de Escolas - " + b
		});
		$('#formAEestagios .interesse').val(a);
}

function dialogAEapm(a){
		$("#dialogAEapm").dialog({
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
			title:"Apresentação de Escolas - " + a
		});
}

function mostraSalas(a){
	if(a == "S"){
		jQuery('#dialogAE #formAE').find('.QtdSalasAno').show();
	}else{
		jQuery('#dialogAE #formAE').find('.QtdSalasAno').hide();
	}
}

function dialogConveniada(){
		$("#dialogConveniada").dialog({
			autoOpen:true,
			position:"middle",
			draggable:true,
			show:"drop",
			hide:"clip",
			width:800,
			height:443,
			bgiframe:true,
			modal:true,
			bgIframe:true,
			title:"Educação Corporativa - Empresas Conveniadas"
		});
}

function enviaAE(){
    var a = $("#dialogAE #formAE .escola").val();
	var b = $('#dialogAE #formAE .tipo option:selected').val();
	var c = $('#dialogAE #formAE .endereco').val();
	var d = $('#dialogAE #formAE .bairro').val();
	var e = $('#dialogAE #formAE .cidade').val();
	var f = $('#dialogAE #formAE .cep').val();
	var g = $('#dialogAE #formAE .nome').val();
	var h = $('#dialogAE #formAE .tel').val();
	var i = $('#dialogAE #formAE .email').val();
	var j = $('input[name="identificacao"]:checked', '#formAE').val();
	var k = $('input[name="ensinoMedio"]:checked', '#formAE').val();
	var l = $('#dialogAE #formAE .qtdSalas').val();
	var m = $('input[name="programa"]:checked', '#formAE').val();
    if (a.length < 3) {
        $(".msg").text("Campo 'Nome do Colégio/Escola' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (b == '0') {
        $(".msg").text("Selecione o 'Tipo'");
        return false
    }else{
        $(".msg").text("");
    }
    if (c.length < 3) {
    	$(".msg").text("Campo 'Endereço' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (d.length < 3) {
        $(".msg").text("Campo 'Bairro' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (e.length < 3) {
        $(".msg").text("Campo 'Cidade' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (f.length < 3) {
        $(".msg").text("Campo 'CEP' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (g.length < 3) {
        $(".msg").text("Campo 'Nome completo do contato' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (h.length < 3) {
        $(".msg").text("Campo 'Telefone' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (i.length < 3) {
        $(".msg").text("Campo 'E-mail' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (k == 'sim'){
    	if (l.length < 1) {
	        $(".msg").text("Campo 'Quantidade de salas no 3º ano' obrigatorio");
	        return false
	    }else{
	        $(".msg").text("");
	    }
    }
    if(m == '' || m == null){
    	$(".msg").text("Campo 'Programa' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
	$.post('/ajax/', {
		enviaAE: true,
		escola:$("#dialogAE #formAE .escola").val(),
		tipo:$('#dialogAE #formAE .tipo option:selected').val(),
		endereco:$('#dialogAE #formAE .endereco').val(),
		bairro:$('#dialogAE #formAE .bairro').val(),
		cidade:$('#dialogAE #formAE .cidade').val(),
		cep:$('#dialogAE #formAE .cep').val(),
		nome:$('#dialogAE #formAE .nome').val(),
		telefone:$('#dialogAE #formAE .tel').val(),
		email:$('#dialogAE #formAE .email').val(),
		identificacao:$('input[name="identificacao"]:checked', '#dialogAE #formAE').val(),
		ensinoMedio:$('input[name="ensinoMedio"]:checked', '#dialogAE #formAE').val(),
		qtdSalas:$('#dialogAE #formAE .qtdSalas').val(),
		programa:$('input[name="programa"]:checked', '#dialogAE #formAE').val()
	},function(data){
		document.getElementById("formAE").reset();
		$('#formAE .msg').text(data.retorno);
			
	},'json');
	
	return false;
}

function enviaAEdif(){
	var a_Dif = $("#formAEdif #interesse option:selected").val();
	var b_Dif = $('#formAEdif .escola').val();
	var c_Dif = $('#formAEdif .nome').val();
	var d_Dif = $('#formAEdif .tipoContato').val();
	var e_Dif = $('#formAEdif .qtdAlunos').val();
	var f_Dif = $('#formAEdif #dataDisponivel option:selected').val();
	var g_Dif = $('#formAEdif .endereco').val();
	var h_Dif = $('#formAEdif .bairro').val();
	var i_Dif = $('#formAEdif .cidade').val();
	var j_Dif = $('#formAEdif .cep').val();
	var k_Dif = $('#formAEdif .tel').val();
	var l_Dif = $('#formAEdif .email').val();
    if (b_Dif.length < 3) {
        $(".msg").text("Campo 'Escola' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (c_Dif.length < 3) {
    	$(".msg").text("Campo 'Nome completo do contato' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (f_Dif == 0){
    	$(".msg").text("Campo 'Escolha uma das datas e horários disponíveis' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (g_Dif.length < 3) {
        $(".msg").text("Campo 'Endereco da empresa' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (h_Dif.length < 3) {
        $(".msg").text("Campo 'Bairro' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (i_Dif.length < 3) {
        $(".msg").text("Campo 'Cidade' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (j_Dif.length < 3) {
        $(".msg").text("Campo 'CEP' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (k_Dif.length < 3) {
        $(".msg").text("Campo 'Telefone comercial' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (l_Dif.length < 3) {
        $(".msg").text("Campo 'E-mail' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
	$.post('/ajax/', {
		enviaAEdif: true,
		interesse:$("#formAEdif #interesse option:selected").val(),
		escola:$('#formAEdif .escola').val(),
		nome:$('#formAEdif .nome').val(),
		tipoContato:$('#formAEdif .tipoContato').val(),
		qtdAlunos:$('#formAEdif .qtdAlunos').val(),
		dataDisponivel:$('#formAEdif #dataDisponivel option:selected').val(),
		endereco:$('#formAEdif .endereco').val(),
		bairro:$('#formAEdif .bairro').val(),
		cidade:$('#formAEdif .cidade').val(),
		cep:$('#formAEdif .cep').val(),
		telefone:$('#formAEdif .tel').val(),
		email:$('#formAEdif .email').val()
	},function(data){
		document.getElementById("formAEdif").reset();
		$('#formAEdif .msg').text(data.retorno);
			
	},'json');
	
	return false;
}

function enviaAEestagios(){
	var a = $("#formAEestagios #interesse option:selected").val();
	var b = $('#formAEestagios .escola').val();
	var c = $('#formAEestagios .nome').val();
	var d = $('#formAEestagios .grauEscolaridade').val();
	var e = $('#formAEestagios .tel').val();
	var f = $('#formAEestagios .cel').val();
	var g = $('#formAEestagios .endereco').val();
	var h = $('#formAEestagios .bairro').val();
	var i = $('#formAEestagios .cidade').val();
	var j = $('#formAEestagios .cep').val();
	var k = $('#formAEestagios .email').val();
    if (b.length < 3) {
        $(".msg").text("Campo 'Empresa ou Escola' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (c.length < 3) {
    	$(".msg").text("Campo 'Nome completo' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (d.length < 3) {
    	$(".msg").text("Campo 'Grau de Escolaridade' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (g.length < 3) {
        $(".msg").text("Campo 'Endereco' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (h.length < 3) {
        $(".msg").text("Campo 'Bairro' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (i.length < 3) {
        $(".msg").text("Campo 'Cidade' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (j.length < 3) {
        $(".msg").text("Campo 'CEP' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (f.length < 3) {
        $(".msg").text("Campo 'Telefone Celular' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (e.length < 3) {
        $(".msg").text("Campo 'Telefone Residencial' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (k.length < 3) {
        $(".msg").text("Campo 'E-mail' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
	$.post('/ajax/', {
		enviaAEestagios: true,
		interesse:$("#formAEestagios #interesse option:selected").val(),
		escola:$('#formAEestagios .escola').val(),
		nome:$('#formAEestagios .nome').val(),
		grauEscolaridade:$('#formAEestagios .grauEscolaridade').val(),
		telefone:$('#formAEestagios .tel').val(),
		celular:$('#formAEestagios .cel').val(),
		endereco:$('#formAEestagios .endereco').val(),
		bairro:$('#formAEestagios .bairro').val(),
		cidade:$('#formAEestagios .cidade').val(),
		cep:$('#formAEestagios .cep').val(),
		email:$('#formAEestagios .email').val()
	},function(data){
		document.getElementById("formAEestagios").reset();
		$('#formAEestagios .msg').text(data.retorno);
			
	},'json');
	
	return false;
}

function enviaAEapm(){
	var a = $('input[name="tipoAPM"]:checked', '#formAEapm').val();
	var b = $('#formAEapm .escola').val();
	var c = $('#formAEapm .nome').val();
	var d = $('#formAEapm .grauEscolaridade').val();
	var e = $('#formAEapm .cel').val();
	var f = $('#formAEapm .email').val();
	var g = $('#formAEapm .endereco').val();
	var h = $('#formAEapm .bairro').val();
	var i = $('#formAEapm .cidade').val();
	var j = $('#formAEapm .cep').val();
    if (a == "0") {
        $(".msg").text("Selecione se você é 'Pai de aluno' ou 'Professor'");
        return false
    }else{
        $(".msg").text("");
    }
    if (b.length < 3) {
        $(".msg").text("Campo 'Nome da Escola' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (c.length < 3) {
    	$(".msg").text("Campo 'Informe seu nome completo' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (d.length < 3) {
    	$(".msg").text("Campo 'Grau de Escolaridade' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (g.length < 3) {
        $(".msg").text("Campo 'Endereco' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (h.length < 3) {
        $(".msg").text("Campo 'Bairro' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (i.length < 3) {
        $(".msg").text("Campo 'Cidade' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (j.length < 3) {
        $(".msg").text("Campo 'CEP' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (e.length < 3) {
        $(".msg").text("Campo 'Celular' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (f.length < 3) {
        $(".msg").text("Campo 'E-mail' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
	$.post('/ajax/', {
		enviaAEapm: true,
		tipoAPM:$('input[name="tipoAPM"]:checked', '#formAEapm').val(),
		escola:$('#formAEapm .escola').val(),
		nome:$('#formAEapm .nome').val(),
		grauEscolaridade:$('#formAEapm .grauEscolaridade').val(),
		celular:$('#formAEapm .cel').val(),
		email:$('#formAEapm .email').val(),
		endereco:$('#formAEapm .endereco').val(),
		bairro:$('#formAEapm .bairro').val(),
		cidade:$('#formAEapm .cidade').val(),
		cep:$('#formAEapm .cep').val()
	},function(data){
		document.getElementById("formAEapm").reset();
		$('#formAEapm .msg').text(data.retorno);
			
	},'json');
	
	return false;
}

function dialogECdif(a, b){
	$("#dialogECdif").dialog({
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
		title:"Educação Corporativa - " + b
	});
}

function enviaECdif(){
	var a_Dif = $("#formECdif #interesse option:selected").val();
	var b_Dif = $('#formECdif .escola').val();
	var c_Dif = $('#formECdif .nome').val();
	var d_Dif = $('#formECdif .tipoContato').val();
	var e_Dif = $('#formECdif .qtdAlunos').val();
	var f_Dif = $('#formECdif #dataDisponivel option:selected').val();
	var g_Dif = $('#formECdif .endereco').val();
	var h_Dif = $('#formECdif .bairro').val();
	var i_Dif = $('#formECdif .cidade').val();
	var j_Dif = $('#formECdif .cep').val();
	var k_Dif = $('#formECdif .tel').val();
	var l_Dif = $('#formECdif .email').val();
    if (b_Dif.length < 3) {
        $(".msg").text("Campo 'Escola' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (c_Dif.length < 3) {
    	$(".msg").text("Campo 'Nome completo do contato' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (f_Dif == 0){
    	$(".msg").text("Campo 'Escolha uma das datas e horários disponíveis' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (g_Dif.length < 3) {
        $(".msg").text("Campo 'Endereco da empresa' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (h_Dif.length < 3) {
        $(".msg").text("Campo 'Bairro' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (i_Dif.length < 3) {
        $(".msg").text("Campo 'Cidade' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (j_Dif.length < 3) {
        $(".msg").text("Campo 'CEP' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (k_Dif.length < 3) {
        $(".msg").text("Campo 'Telefone comercial' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
    if (l_Dif.length < 3) {
        $(".msg").text("Campo 'E-mail' obrigatorio");
        return false
    }else{
        $(".msg").text("");
    }
	$.post('/ajax/', {
		enviaECdif: true,
		interesse:$("#formECdif #interesse option:selected").val(),
		escola:$('#formECdif .escola').val(),
		nome:$('#formECdif .nome').val(),
		tipoContato:$('#formECdif .tipoContato').val(),
		qtdAlunos:$('#formECdif .qtdAlunos').val(),
		dataDisponivel:$('#formECdif #dataDisponivel option:selected').val(),
		endereco:$('#formECdif .endereco').val(),
		bairro:$('#formECdif .bairro').val(),
		cidade:$('#formECdif .cidade').val(),
		cep:$('#formECdif .cep').val(),
		telefone:$('#formECdif .tel').val(),
		email:$('#formECdif .email').val()
	},function(data){
		document.getElementById("formECdif").reset();
		$('#formECdif .msg').text(data.retorno);
			
	},'json');
	
	return false;
}

function servOpen(id){
	$.post('',{
		servOpen:true,
		id: id
	}, function(data){
		$('#intServico').html(data);
	});	
}

function maiGaleri(caminho, legenda){
	$('#servico #galeria .principal img').attr('src', caminho);	
	$('#servico #galeria .principal p').text(legenda);
}

function enviaEAD(){
    var b = $("#formEAD .nome").val();
    var c = $("#formEAD .sobrenome").val();
    var d = $("#formEAD .email").val();
    var e = $("#formEAD .confemail").val();
    var a = $("#formEAD .telefone").val();
    if (b.length < 3) {
        $(".errorNome").text("Campo obrigatorio");
        $("#formEAD .msg").text("");
        return false
    }else{
        $(".errorNome").text("");
    }
    if (c.length < 3) {
        $(".errorSobrenome").text("Campo obrigatorio");
        $("#formEAD .msg").text("");
        return false
    }else{
        $(".errorSobrenome").text("");
    }
    if (a.length < 3) {
        $(".errorTel").text("Campo Obrigatorio");
        $("#formEAD .msg").text("");
        return false
    }else{
        $(".errorTel").text("");
    }
    if (d.length < 3) {
        $(".errorEmail").text("Campo Obrigatorio");
        $("#formEAD .msg").text("");
        return false
    }else{
        $(".errorEmail").text("");
    }
    if (e.length < 3) {
        $(".errorConfEmail").text("Campo Obrigatorio");
        $("#formEAD .msg").text("");
        return false
    }else{
        $(".errorConfEmail").text("");
    }
    if (d != e) {
        $(".errorEmail").text("Campos E-mail e Confirmar o e-mail devem ser iguais");
        $("#formEAD .msg").text("");
        return false
    }else{
        $(".errorEmail").text("");
    }
    $.post('/ajax/', {
        enviaEAD: true,
        nome:$('#formEAD .nome').val(),
        sobrenome:$('#formEAD .sobrenome').val(),
        telefone:$('#formEAD .telefone').val(),
        email:$('#formEAD .email').val(),
        confemail:$('#formEAD .confemail').val(),
    },function(data){
        document.getElementById("formEAD").reset();
        $('#formEAD .msg').text(data.retorno);
            
    },'json');
    
    return false;
}

function aviseMe(){
	
		$("#dialog").dialog({
			autoOpen: true,
			position: 'middle',
			draggable: true,
			show: 'drop',
			hide: "clip",
			width: 'auto',
			height: 'auto',
			bgiframe: true,
			modal: true,
			bgIframe: true,
			title: 'Avise-me',	
			show: {
				effect: "toggle"
			},
			hide: {
				duration: 100
			}
		});	
}