# This is | pipex
42 project pipex, passed 125/100

## Goal
Discover in detail a UNIX mechanism that we already know by using it in our program.

## Problems you will solve with pipex
Executing C programs "on steroids" leveraging the full reach of the existing system commands.

## Key Takeaways
Each time you call a system process its execution will overwrite your running process, therefore you'll need to "fork"
i.e. reproduce an exact copy of the memory at a point in time and "sacrifice" it for system execution.
This compels you also to manage input and output with file descriptors accordingly, piping information in logical and timely ways.
Personally I also refined usage of exit statuses, error messages and in general use of the three standard file desciptors, really
appreciating 2 - STDERR which I greatly underestimated until recently.
In all a great learning experience also this time, so fasten your seat belts and get ready for some hard thinking.

## Usage mandatory part

`make`

### Syntax

`./pipex infile "shell cmd with options" "shell cmd with options" outfile`

equates to:

`< infile shell cmd with options | shell command with options > outfile`

## Usage bonus part

`make bonus`

### Syntax
same as mandatory but n pipes allowed

### Syntax heredoc

`./pipex here_doc DELIMITER "shell cmd with options" "shell cmd with options" outfile`

equates to:

`shell cmd with options <<DELIMITER | shell cmd with options >> outfile`

## Credits and thanks to
The staff at codevault, Alessandro, Max, Rouven, Jamshidbek, Hei Yiu, Florian among many other great 42 Heilbronn fellows too many to mention here, in addition to great evaluators and people around the world who built and shared great code and learnings, thank You all.
