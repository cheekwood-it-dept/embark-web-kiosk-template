<a class="skippy sr-only sr-only-focusable" role="navigation" aria-label="Skip links" href="#main">
    Skip to Content
</a>

<header class="navbar navbar-expand-lg navbar-light bg-light mb-3 sticky-top">
    <a class="navbar-brand" href="/">
       <div class="logo" style="display:inline;"></div>
       <strong>EmbARK Web Kiosk</strong>
    </a>
    <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
      <span class="navbar-toggler-icon"></span>
    </button>

    <div class="collapse navbar-collapse " id="navbarSupportedContent">
        <div class="navbar-nav mr-auto"></div> <!-- spacer -->

        <ul class="navbar-nav mt-2 mt-lg-0 px-2">
            <li class="nav-item pr-2">
                <a class="nav-link" href="/">Home</a>
            </li>

            <li class="nav-item dropdown pr-2">
                <a class="nav-link dropdown-toggle" href="#" id="navbarDropdown" role="button" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false">
                    Browse
                </a>
                <div class="dropdown-menu" aria-labelledby="navbarDropdown">
                    <a class="dropdown-item text-black" href="/index-tree/tree/-1?records=12">Collections</a>
                    <!--#4Dif (gsFunc_HasAccessToTable(->[Portfolios]))-->
                        <a class="dropdown-item text-black" href="/portfolios/list?records=12">Portfolios</a>
                    <!--#4Dendif-->
                    <!--#4Dif ((Records in table([Exhibitions])>0) & (gsFunc_HasAccessToTable(->[Exhibitions]))-->
                        <a class="dropdown-item text-black" href="/exhibitions/list?records=12">Exhibitions</a>
                    <!--#4Dendif-->
                    <!--#4Dif ((Records in table([Biblio_Citation])>0) & (gsFunc_HasAccessToTable(->[Biblio_Citation]))-->
                        <a class="dropdown-item text-black" href="/biblio-citation/list?records=12">Publications</a>
                    <!--#4Dendif-->
                    <!--#4Dif ((Records in table([Acquisition])>0) & (gsFunc_HasAccessToTable(->[Acquisition]))-->
                        <a class="dropdown-item text-black" href="/acquisition/list?records=12">Acquisitions</a>
                    <!--#4Dendif-->
                    <!--#4Dif (gsFunc_HasAccessToTable(->[Artist_Maker]))-->
                        <a class="dropdown-item text-black" href="/kiosk/BrowseArtist.htm">Artists</a>
                    <!--#4Dendif-->
                    <a class="dropdown-item text-black" href="/kiosk/BrowseGeography.htm">Geography</a>
                    <a class="dropdown-item text-black" href="/kiosk/BrowseKeywords.htm">Keywords</a>
                    <!--#4Dif (gsFunc_User_IsSharedPortfolios=true)-->
                        <div class="dropdown-divider"></div>
                        <a class="dropdown-item text-black" href="/portfolios/community?records=12&community=t">User Portfolios</a>
                    <!--#4Dendif-->
                </div>
            </li>

            <li class="nav-item pr-2">
                <a class="nav-link" href="../kiosk/help.htm" target="_blank">Help</a>
            </li>
        </ul>

        <div class="navbar-nav">
            <form class="form-inline my-2 my-lg-0" role="search" action="/4DACTION/HANDLECGI/Search" method="post">
                <input type="hidden" name="SearchField4" value="mfs"/>
                <input type="hidden" name="SearchOp4" value="any"/ id="SearchOp4">
                <input type="hidden" name="SearchTable" value="Objects_1"/>
                <input type="hidden" name="display" value="thumbnails"/>
                <input type="hidden" name="records" value="50"/>
                <input type="hidden" name="sort" value="9"/>
                <script>
                    function flipQuickSearchType () {
                        searchOperandInput = document.getElementById ('SearchOp4');
                        if (searchOperandInput.value==="any") {
                            searchOperandInput.value = "all";
                        } else {
                            searchOperandInput.value = "any";
                        }
                    };
                </script>

                <div>
                    <div class="input-group">
                        <input class="form-control" type="text" placeholder="Search the Collection" size="35" name="SearchValue4" value=""/ style="max-width:270px;">
                        <span class="input-group-btn">
                            <button type="submit" class="btn btn-primary" aria-label="Search Collection" name="doSubmit" style="height:100%;">
                                <i class="fa fa-search"></i>
                            </button>
                        </span>
                    </div>
                    <div class="float-left small">
                        <div class="custom-control custom-switch">
                          <input type="checkbox" class="custom-control-input" id="customSwitch1" onclick="flipQuickSearchType();">
                          <label class="custom-control-label" style="padding-top:3px;" for="customSwitch1">Match all words</label>
                        </div>
                    </div>
                    <div class="float-right small" style="padding-top:3px;">
                        <a href="/kiosk/search.htm">Advanced Search</a>
                    </div>
                </div>
            </form>
        </div>

        <!--#4Dif (gsFunc_GetInfo("Logon Enabled")="Yes")-->
            <ul class="navbar-nav mt-2 mt-lg-0 pl-3">
                <li class="nav-item dropdown">
                    <a class="nav-link dropdown-toggle" href="#" id="navbarDropdown" role="button" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false">
                        <!--#4Dif (Security_isAuthenticatedUser)-->
                            <i class="fa fa-user-circle fa-lg" style="color:darkgreen; font-size:2.5em;"></i>
                        <!--#4Delse-->
                            <i class="fa fa-user-circle fa-lg" style="color:darkgray; font-size:2.5em;"></i>
                        <!--#4Dendif-->
                    </a>
                    <div class="dropdown-menu dropdown-menu-right" aria-labelledby="navbarDropdown">
                        <!--#4Dif (Security_isAuthenticatedUser)-->
                            <h6 class="dropdown-header">Logged in as <strong><!--#4Dtext gsFunc_GetInfo("Username")--></strong></h6>
                            <div class="dropdown-divider"></div>
                            <a class="dropdown-item" href="/userHome">Information</a>
                            <a class="dropdown-item" href="/userPortfolios">My Portfolios</a>
                            <a class="dropdown-item" href="/kiosk/password.htm">Change Password</a>
                            <!--#4Dif (Security_isAdmin)-->
                                <div class="dropdown-divider"></div>
                                <a class="dropdown-item" href="/userManager">Manage Web Users</a>
                            <!--#4Dendif-->
                            <div class="dropdown-divider"></div>
                            <a class="dropdown-item" href="/LOGOFF*">Log off</a>
                        <!--#4Delse-->
                            <a class="dropdown-item" href="/ULOG">Log on</a>
                        <!--#4Dendif-->
                    </div>
                </li>
            </ul>
        <!--#4Dendif-->
    </div>
</header>
