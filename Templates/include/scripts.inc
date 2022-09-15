    <!-- start scripts -->
	<link rel="icon" href="/graphics/favicon.ico" type="image/x-ico" />

    <!-- inserts JavaScript at the top of every page -->
    <!-- <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.3.1/jquery.min.js"></script> -->
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.5.1/jquery.min.js"></script>

	<script src="https://cdn.jsdelivr.net/npm/popper.js@1.16.1/dist/umd/popper.min.js" integrity="sha384-9/reFTGAW83EW2RDu2S0VKaIzap3H66lZH81PoYlFhbGU+6BZp6G7niu735Sk7lN" crossorigin="anonymous"></script>
	<!-- <script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.14.7/umd/popper.min.js" integrity="sha384-UO2eT0CpHqdSJQ6hJty5KVphtPhzWj9WO1clHTMGa3JDZwrnQq4sF86dIHNDz0W1" crossorigin="anonymous"></script> -->

	<link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.5.2/css/bootstrap.min.css" integrity="sha384-JcKb8q3iqJ61gNV9KGb8thSsNjpSL0n8PARn9HuZOnIxN0hoP+VmmDGMN5t9UJ0Z" crossorigin="anonymous">
	<script src="https://stackpath.bootstrapcdn.com/bootstrap/4.5.2/js/bootstrap.min.js" integrity="sha384-B4gt1jrGC7Jh4AgTPSdUtOBvfO8shuf57BaghqFfPlYxofvL8/KUEfYiJOMMV+rV" crossorigin="anonymous"></script>

	<!-- <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/css/bootstrap.min.css" integrity="sha384-ggOyR0iXCbMQv3Xipma34MD+dH/1fQ784/j6cY/iJTQUOhcWr7x9JvoRxT2MZw1T" crossorigin="anonymous">
	<script src="https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/js/bootstrap.min.js" integrity="sha384-JjSmVgyd0p3pXB1rRibZUAYoIIy6OrQ6VrjIEaFf/nJGzIxFDsf4x0xIM+B07jRM" crossorigin="anonymous"></script> -->

	<script src="https://unpkg.com/isotope-layout@3/dist/isotope.pkgd.min.js"></script>

    <script type="text/javascript" src="/scripts/highslide/highslide-full.min.js"></script>
    <link rel="stylesheet" type="text/css" href="/scripts/highslide/highslide.css" />
    <script type="text/javascript" src="/scripts/highslideinit.js"></script>
	<script type="text/javascript" src="/scripts/filterbox.js"></script>
	<script type="text/javascript" src="/scripts/myscript.js"></script>
	<script async src="https://www.googletagmanager.com/gtag/js?id=UA-xxx"></script>
	<script type="text/javascript" src="/scripts/ga_tags.js"></script>

	<link rel="stylesheet" href="https://ajax.googleapis.com/ajax/libs/jqueryui/1.12.1/themes/smoothness/jquery-ui.css">
	<script src="https://ajax.googleapis.com/ajax/libs/jqueryui/1.12.1/jquery-ui.min.js"></script>

	<link id="bsdp-css" href="/scripts/bootstrap-datepicker/css/bootstrap-datepicker3.min.css" rel="stylesheet">
	<script src="/scripts/bootstrap-datepicker/js/bootstrap-datepicker.min.js"></script>
	<link rel="stylesheet" type="text/css" href="/kioskstyles.css"/>

    <script type="text/javascript">
		function getGallerySystemsCookie(name) {
			var value = "; " + document.cookie;
			var parts = value.split("; GSWK_" + name + "=");
			if (parts.length >= 2) {
				return parts.pop().split(";").shift();
			} else {
				return "";
			}
		}

		// console.log(jQuery);
        function getStyleObj (obj) {
            // returns a 'style' object that's properly formatted for the user's browser
            if(is.ns5) {
                styleObj = document.getElementById(obj).style;
            }
            else if(is.ie) {
                styleObj = eval("document.all." + obj + ".style");
            }
            else if(is.ns) {
                styleObj = eval("document." + obj);
            }

            return styleObj;
        }

        function menuOn(selMenu) {
            // // Change the background color of selMenu on mouse rollover.
            // var obj = getStyleObj(selMenu);
            // obj.backgroundColor ="#000";
            // //this color corresponds to the .menu a:hover bgcolor set in kioskstyles.css
        }

        function menuOff(selMenu) {
            // // Remove the background color of selMenu on mouse rollout.
            // if(currentMenu == selMenu) {
            //     // this is the 'current' menu; it should continue to look selected;
            //     setMenu(selMenu);
            // } else {
            //     var obj = getStyleObj(selMenu);
            //     obj.backgroundColor ="";
            // }
        }

        var currentMenu = "";

        function setMenu(selMenu) {
            // // Changes the background color of the selected menu
            // // This function is called in the 'onload' script of <body> tags.
            // currentMenu = selMenu;
            // var obj = getStyleObj(selMenu);
            // obj.backgroundColor ="#666666";
        }

        function showHelp(theURL) {
            theURL = '/Help/'+theURL+'.htm';
            var newWindow = window.open(theURL,'Help','width=300,height=400,scrollbars,resizable');
        }

        function addToPort(SessionID,Sequence,objID) {
            document.theForm.objID.value = objID;
            suffix = "?sid="+SessionID + "&x=" + Sequence;
            var portWind = window.open("/Kiosk/ChoosePort.htm"+suffix,"ChoosePort","height=150,width=300")
        }

        function addIDs() {
            document.theForm.action = document.theForm.action+document.theForm.portID.value+"*"+document.theForm.objID.value+suffix;
            document.theForm.submit();
        }

      $(document).ready( function() {
        $( "#accordion" ).accordion({
          collapsible: true,
          header: '.other-info',
          heightStyle: "content",
          active: false
        });
      } );


/* ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Disable context menu on images by GreenLava (BloggerSentral.com)
Version 1.0
You are free to copy and share this code but please do not remove this credit notice.
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ */
/* (remove this line to enable)
   function nocontext(e) {
     var clickedTag = (e==null) ? event.srcElement.tagName : e.target.tagName;
     if (clickedTag == "IMG") {
       alert(alertMsg);
       return false;
     }
   }
   var alertMsg = "Image context menu is disabled";
   document.oncontextmenu = nocontext;
  //-->
(remove this line to enable */



    </script>


    <!-- end scripts -->
