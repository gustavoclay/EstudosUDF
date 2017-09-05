function jMObject() {
	this.config = {
		cssClass: "info",
		width: 350,
		height: 120,
		modal: false,
		message: "",
		onOpen: null,
		onClose: null
	}

	this.info = function(message, width, height, onClose) {
		this.config.cssClass = "info";
		if( width != undefined) this.config.width = width;
		if( height != undefined ) this.config.height = height;
		if( onClose != undefined && onClose != 'undefined' ) this.config.onClose = onClose;
		this.config.message = message;
		this.showMessage(this.config.message);
	}
	
	this.warning = function(message, width, height, onClose) {
		this.config.cssClass = "warning";
		if( width != undefined ) this.config.width = width;
		if( height != undefined ) this.config.height = height;
		if( onClose != undefined && onClose != 'undefined' ) this.config.onClose = onClose;
		this.config.message = message;
		this.showMessage(this.config.message);
	}
	
	this.error = function(message, width, height, onClose) {
		this.config.cssClass = "error";
		if( width != undefined ) this.config.width = width;
		if( height != undefined ) this.config.height = height;
		if( onClose != undefined && onClose != 'undefined' ) this.config.onClose = onClose;
		this.config.message = message;
		this.config.modal = true;
		this.showMessage(this.config.message);
	}
	
	this.success = function(message, width, height, onClose) {
		this.config.cssClass = "success";
		if( width != undefined ) this.config.width = width;
		if( height != undefined ) this.config.height = height;
		if( onClose != undefined && onClose != '' ) this.config.onClose = onClose;
		this.config.message = message;
		this.showMessage(this.config.message);
	}
	
	this.process = function(message, onClose, width) {
		this.config.cssClass = "loading";
		if( width != undefined ) this.config.width = width;
		this.config.height = 100;
		if( onClose != undefined && onClose != '' ) this.config.onClose = onClose;
		this.config.onOpen = function(event, ui) { $(".ui-dialog-titlebar-close").hide(); };
		this.config.message = message;
		this.config.modal = true;
		this.showMessage(this.config.message);
	}
	
	this.confirmation = function(Header, MSG, formID){    
		 $("<div id=\"confirm_delete\"><p class=\"alert warning\">"+MSG+"</p></div>").appendTo("body");		
			$("#confirm_delete").dialog({
				autoOpen: true,
				modal: true,
				title: Header,
				width: 400,
				height: 'auto',
				buttons: {
					"Sim" : function(){
						$(this).dialog("destroy");
						$("#flagSubmeter").val("S");
						$("#confirm_delete").remove();
						$("#"+formID).submit();
		   			},
					"Não" : function(){
						$(this).dialog("destroy");
						$("#confirm_delete").remove();
					}
				}
			});
		return false;
	}
	
	
	this.showMessage = function(){
		alerta = $("<div class='alertDialog' id='alert_"+this.config.cssClass+"'><p class='alert "+this.config.cssClass+"'>"+this.config.message+"</p></div>").appendTo("body");
		$("#alert_"+this.config.cssClass).dialog({
			autoOpen: true, 
			modal: this.config.modal,
			height: this.config.height, 
			width: this.config.width,
			title: 'UDF',
			open: this.config.onOpen,
			close: this.config.onClose
		});
	}
	
}

var jM = new jMObject();
