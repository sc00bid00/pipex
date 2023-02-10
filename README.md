# pipex
42 project pipex, passed 125/100

Usage mandatory part:

make

Syntax:

`./pipex infile "shell cmd with options" "shell cmd with options" outfile
equates with shell:
< infile shell cmd with options | shell command with options > outfile`

Usage bonus part:

make bonus

Syntax:
same as mandatory but n commands allowed

Syntax heredoc:

`./pipex here_doc DELIMITER "shell cmd with options" "shell cmd with options" outfile
equates with shell:
shell cmd with options <<DELIMITER | shell cmd with options >> outfile`

Credits and thanks to:
Alessandro, Max, Rouven, Jamshidbek, Hei Yiu, Florian among many otehr great 42 Heilbronn fellows too many to mention here, in addition to great evaluators and people around the world who built and shared great code and learnings, thank You to You all.
