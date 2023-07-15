
<h1 align="center">
  0x16. C - Simple Shell
</h1>

<p align="center">
   📄 🚀
</p>

<p align="center">
  <strong>
   Description
  </strong>
</p>

<p align="center">
This project is an implementation of the shell created as a Milestone Project for the C code at ALX Africa Software Engineering. </br>
The gates of shell is a project in the first trimester, that helps student to understand the advanced
concepts behind the shell program include process, system call, bit manipulation, file managment, error handling ... </br>
Shell is a simple UNIX command interpreter that replicates functionalities of the simple shell (sh). </br>
This program was written entirely in C Language.
</p>

 ## Description :
This is a shell written in [C](https://en.wikipedia.org/wiki/C_(programming_language)).
It is based on [the Thompson Shell](https://en.wikipedia.org/wiki/Thompson_shell).

## Environment :

Our shell was built and tested on  Ubuntu 14.04 LTS.

## Features
* Display a prompt and wait for the user to type a command. A command line always ends with a new line.
* If an executable cannot be found, print an error message and display the prompt again.
* Handle errors.
* Hndling the “end of file” condition (Ctrl+D)
* Hanling the command line with arguments
* Handle the PATH
* Support the exit features and the exit status
* Handle the Ctrl-C to not terminate the shell
* Handling the command seperator `;`
* Handling `&&` and `||` logical operators
* Handle variable replacements `$?` and `$$`
* Handle the comments `#`
* Support the history feature
* Support the file input

## Builtins
Our shell has support for the following built-in commands:

| Command             | Definition                                                                                |
| ------------------- | ----------------------------------------------------------------------------------------- |
| exit [n]            | Exit the shell, with an optional exit status, n.                                          |
| env                 | Print the environment.                                                                    |
| setenv [var][value] | Set an environment variable and value. If the variable exists, the value will be updated. |
| alias[name[='value]]| Reads aliases name                                                                        |
| unsetenv [var]      | Remove an environment variable.                                                           |
| cd [dir]            | Change the directory.                                                                     |
| help [built-in]     | Read documentation for a built-in.                                                        |


 ## Installation : Getting HSH
 
Clone the below repository and compile the files into an executable using the GCC compiler.
```
https://github.com/StellahMbao/simple_shell.git
```

### Basic usage :bulb:
- First, Fork this Repository [Learn how to fork repo](https://docs.github.com/en/github/getting-started-with-github/fork-a-repo).
- Then Clone [Learn how to clone ](https://docs.github.com/en/github/creating-cloning-and-archiving-repositories/cloning-a-repository).
- Create an executable by running the following command:
- `gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`
- From there, type in the following command and press your enter button.
- `./hsh`
- Final step: ENJOY!


## Example :computer:
```
ls -la
```
![114757753-e50c2180-9d64-11eb-95ea-fb9bba776c8c](https://user-images.githubusercontent.com/57016982/186711943-65abad4d-eedf-4d65-947d-3710e189bdee.png)


## Acknowledgments :
- The creators of the C language.
- Our software engineer-in-residence.
- Betty Holberton | Alx-Africa .

# Pre-requisites

Authorized functions and macros:                  <ul>
<li>access (man 2 access)</li>
<li>chdir (man 2 chdir)</li>                      <li>close (man 2 close)</li>
<li>closedir (man 3 closedir</li>)
<li>execve (man 2 execve)</li>
<li>exit (man 3 exit)</li>
<li>_exit (man 2 _exit)</li>                      <li>fflush (man 3 fflush)</li>
<li>fork (man 2 fork)</li>
<li>free (man 3 free)</li>
<li>getcwd (man 3 getcwd)</li>                    <li>getline (man 3 getline)</li>
<li>isatty (man 3 isatty)</li>
<li>kill (man 2 kill)</li>
<li>malloc (man 3 malloc)</li>
<li>open (man 2 open)</li>
<li>opendir (man 3 opendir)</li>
<li>perror (man 3 perror)</li>
<li>read (man 2 read)</li>
<li>readdir (man 3 readdir)</li>
<li>signal (man 2 signal)</li>
<li>stat (__xstat) (man 2 stat)</li>
<li>lstat (__lxstat) (man 2 lstat)</li>
<li>fstat (__fxstat) (man 2 fstat)</li>
<li>strtok (man 3 strtok)</li>
<li>wait (man 2 wait)</li>
<li>waitpid (man 2 waitpid)</li>
<li>wait3 (man 2 wait3)</li>
<li>wait4 (man 2 wait4)</li>
<li>write (man 2 write)</li>

</ul>

<strong>GCC command to compile:</strong>
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh

This wil compile all the '.c' files and change the output's name to 'hsh'.

# Testing

<strong>Your shell should work like this in interactive mode:</strong>
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$

# Contact Info:

Github: Brigg-commit, Trmrskr

Twitter: Brigjimtg, Trmrskr

# Authors


Bridget Idam <ibridget@gmail.com>

Alale Tamara-Kuro Simon <simonalale@gmail.com>
