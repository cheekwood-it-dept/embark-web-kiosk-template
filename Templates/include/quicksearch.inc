
<form action="/4DACTION/HANDLECGI/Search" method="post" class="form-horizontal">
	<input type="hidden" name="SearchField4" value="mfs"/>
	<input type="hidden" name="SearchOp4" value="any"/>
	<input type="hidden" name="SearchTable" value="Objects_1"/>
	<input type="hidden" name="display" value="thumbnails"/>
	<input type="hidden" name="records" value="10"/>

    <div style="max-width:300px;">
		<div class="input-group">
			<input class="form-control" type="text" placeholder="Search the Collection" size="40" name="SearchValue4" style="background-color: #fff;" value=""/>
			<span class="input-group-btn">
				<button type="submit" class="btn btn-primary" aria-label="Search Collection" name="doSubmit">
	                <span class="glyphicon glyphicon-search" aria-hidden="true"></span>
	                Search
	            </button>
	        </span>
		</div>
    </div>
</form>
