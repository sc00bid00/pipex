# pipex
42 project pipex, passed 125/100

Usage mandatory part:
make

Syntax:
./pipex infile "shell cmd with options" "shell cmd with options" outfile
equates with shell:
< infile shell cmd with options | shell command with options > outfile

Usage bonus part:
make bonus

Syntax:
same as mandatory but n commands allowed

Syntax heredoc:

./pipex here_doc DELIMITER "shell cmd with options" "shell cmd with options" outfile
equates with shell:
shell cmd with options <<DELIMITER | shell cmd with options >> outfile

Credits:
Alessandro, Max, Rouven, Jamshidbek, Hei Yiu, Florian among many others too many great 42 Heilbronn mates to mention here, in addition to some great evaluators and people around the world who build great code, thank You to You all.
