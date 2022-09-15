<!--! helloo from portfolios inc -->


<hr />
%{Start Portfolio List;personal}%
%{_ID}%: %{Portfolio Name}%<br />
%{End Portfolio List}%
%{End Loop}%


<hr />
<!--4DLoop [Portfolios]-->
	<!--4DVAR MyCounter--><br />
	<!--4DVar [Portfolios]Disp_Title --><br />
<!--4DEndLoop -->


<hr />
<!--4DSCRIPT/GetDistinctValues/[Portfolios]-->
<!--4DIF (Size of array(atTemp1)>0)-->
	<!--4DLOOP atTemp1-->
		<!--4DVAR atTemp1{atTemp1}--><br>
	<!--4DENDLOOP-->
<!--4DELSE-->
	There are no values to display.
<!--4DENDIF-->


<hr />
<!--4DSCRIPT/GetDistinctValues/[Objects_1]Medium-->
<!--4DIF (Size of array(atTemp1)>0)-->
	<!--4DLOOP atTemp1-->
		<!--4DVAR atTemp1{atTemp1}--><br>
	<!--4DENDLOOP-->
<!--4DELSE-->
	There are no values to display.
<!--4DENDIF-->
