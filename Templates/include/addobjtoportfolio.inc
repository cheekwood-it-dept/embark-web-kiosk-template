%{if (Logged In)}%
	%{if (Records)}%
		<a href="javascript:addToPort('','&amp;x=%{Sequence}%','-1');">Add</a> current selection of %{Records - Object}% objects to a portfolio.
	%{end if}%
%{end if}%
