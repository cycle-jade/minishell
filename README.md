*This project has been created as part of the 42 curriculum by `<glicciar>`.*

# minishell

> A small Unix shell written in C, modelled on bash.

## Description

minishell reads commands from an interactive prompt, parses them, and executes them the way bash would. The goal of the project is to understand how a shell works internally: processes, file descriptors, pipes, signals and environment handling.

**Key features**
- Interactive prompt with command history (GNU readline)
- Runs executables found through `PATH`, or via relative and absolute paths
- Single and double quote handling (`'...'` stops all expansion, `"..."` allows only `$`)
- Redirections: `<`, `>`, `>>`, and heredoc `<<`
- Pipes (`|`) connecting any number of commands
- Environment variable expansion (`$VAR`) and exit status expansion (`$?`)
- Signals in interactive mode: `Ctrl-C` shows a new prompt, `Ctrl-D` exits, `Ctrl-\` does nothing
- Built-ins: `echo -n`, `cd`, `pwd`, `export`, `unset`, `env`, `exit`
- A single global variable, used only to store the received signal number

Bonus (`&&`, `||`, parentheses, wildcards): not implemented.

## Instructions

**Requirements**
- Linux (or macOS) with `cc`, `make` and the GNU readline library installed

**Build and run**
```bash
make
./minishell
```

**Other Makefile rules**
```bash
make clean    # remove object files
make fclean   # remove objects and the binary
make re       # rebuild from scratch
```

**Example**
```bash
minishell$ echo "hello" | cat -e > out.txt
minishell$ export NAME=world
minishell$ echo $NAME
world
```

## Technical choices
- tokenizer, then parser, then executor
- handling heredocs and file descriptors
- Memory Management and leaks clean uo

## Resources
- [GNU Bash Reference Manual](https://www.gnu.org/software/bash/manual/bash.html)
- [GNU Readline documentation](https://tiswww.case.edu/php/chet/readline/rltop.html)
- `man` pages: `fork`, `execve`, `pipe`, `dup2`, `waitpid`, `sigaction`

**Use of AI**
- Code assistence and debugging
