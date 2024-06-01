A makefile is an automation tool, that allows you to run and compile programs more efficiently. Makefiles defines set of tasks to be executed.

Example:
say_hello:
	@echo "Hello World"

In the example "say_hello" serves as a function name. It's also called a target. What follows next are refered to as dependencies. 
The command "echo Hello World" is a recipe that uses the dependencies to make a rule.
The overall syntax of the rule is:
	target: dependencies/prerequisites
	<TAB> recipe
