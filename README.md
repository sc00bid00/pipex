# This is pipex
42 project pipex, passed 125/100

## Goal
Discover in detail a UNIX mechanism that we already know by using it in our program

## Key Takeaways
Each time I call a system process its execution will overwrite my running process, therefore I'll need to "fork"
i.e. reproduce an exact copy of the memory at a point in time and "sacrifice" it for system execution.
This compels me also to manage inputs and output with file descriptors accordingly, piping information in logical and timely ways.
In all a great learning experience also this time.

## Usage mandatory part:

make

### Syntax:

`./pipex infile "shell cmd with options" "shell cmd with options" outfile`

equates to:

`< infile shell cmd with options | shell command with options > outfile`

## Usage bonus part:

make bonus

### Syntax:
same as mandatory but n commands allowed

### Syntax heredoc:

`./pipex here_doc DELIMITER "shell cmd with options" "shell cmd with options" outfile`

equates to:

`shell cmd with options <<DELIMITER | shell cmd with options >> outfile`

## Credits and thanks to:
Alessandro, Max, Rouven, Jamshidbek, Hei Yiu, Florian among many other great 42 Heilbronn fellows too many to mention here, in addition to great evaluators and people around the world who built and shared great code and learnings, thank You to You all.
