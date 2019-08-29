# #cisfun-Lama6a~$ Simple Shell

<blockquote class="imgur-embed-pub" lang="en" data-id="a/iqPq967"><a href="//imgur.com/a/iqPq967"></a></blockquote><script async src="//s.imgur.com/min/embed.js" charset="utf-8"></script>

This repo has our custom shell project, which attempts to replicate some of the processes of the 'sh' shell or 'bash' shell. For more on the processes of #cisfun-Lama6a~$, please reference our blog post here:
## Synopsis
Built and tested in the Ubuntu 14.04 LTS via Vagrant in VirtualBox and compiled with GCC version 4.8.4. Lama6a~$ Simple Shell integrates commands located in the system's PATH with custom built-in commands, and also functionality from bash standard commands.
## Quick Start
   Git clone all this respository to your local directory.
   $ git clone https://github.com/monicajaimesc/simple_shell.git

      Compile the program.
      $ make all
         Execute the shell.
	 $ ./hsh
	 Note: You can also run this shell in non-interactive mode, by simply piping your desired commands into the shell executable.
## Syntax
	 When using this shell, the syntax for running any command follows the familiar syntax when running a command in any other shell:
#cisfun-Lama6a~$ <command> <flags or options> <argument 1> <argument 2> ...
	 In non-interactive mode:
#cisfun-Lama6a~$ <command> | ./hsh
	 Example
	 Interactive mode:
#cisfun-Lama6a~$ /bin/ls
	 or
#cisfun-Lama6a~$ ls -l
	 or
#cisfun-Lama6a~$ cat textfile
	 Non-interactive mode:
	 $ echo "ls -l" | ./hsh
## Built-ins
	 | Built-in | Use |
	 | :-:  | :-: |
	 |cd|Change directory|
	 |exit|Exit the shell|
	 |help|Display help for a builtin command|
## Files
	 Here is the files description:
	 | File | Description |
	 | :-:  | :-: |
	 | AUTHORS | Contributors list to this project |
	 |strcat.c |Contains several arrays helpers functions|
	 |strcmp.c |Contains several arrays helpers functions|
	 |strcpy.c | Loop of main routine |
	 |strlen.c | Get a line fron stdin |
	 |read_input.c | Tokenize a command line |
	 |main.c | |
	 |getenv.c| get environmet for the string  |
	 |delete_memory.c | delete memory in double pointer |
	 |create_node.c | creat a node for the path |
	 |command_execute.c| execute my path structure |
	 |calloc.c| create memory space |
	 |break_line.c| break the string for torkenize process |
	 |man_1_simple_shell|Simple shell man page|
	 |shell.h|Include all the headers files|
### Authors
	 Monica Jaimes Caicedo
	 email: 880@holbertonschool.com
## License
	 [MIT](https://choosealicense.com/licenses/mit/)
