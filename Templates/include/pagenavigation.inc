<p class="err">%{Message}%</p>
<div class="embarkPageNav">
	%{Include activerecords.inc}%
	<div class="embarkPageNav-left navtxt">
<!--4DIF (HasPrevious=TRUE)-->
		<a class="embarkPageNavItem-first" href="%{First Page}%">first</a>
		<a class="embarkPageNavItem-previous" href="%{Previous Page}%">prev<span class="sro">ious</span></a>
<!--4DELSE-->
		<span class="embarkPageNavItem-first">first</span>
		<span class="embarkPageNavItem-previous">prev<span class="sro">ious</span></span>
<!--4DENDIF-->
	</div>

	<div class="embarkPageNav-right navtxt">
<!--4DIF (HasNext)-->
		<a class="embarkPageNavItem-next" href="%{Next Page}%">next</a>
		<a class="embarkPageNavItem-last" href="%{Last Page}%">last</a>
<!--4DELSE-->
		<span class="embarkPageNavItem-next">next</span>
		<span class="embarkPageNavItem-last">last</span>
<!--4DENDIF-->
	</div>
</div>
