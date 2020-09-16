![Simple_Shell](https://blog.robertelder.org/images/fifo-lifo-harmful-stacks-queues_stack-in-stack-out-multiple_1000x600_q85.jpeg)   
# Stacks and Queues

### Stacks
---

A stack is a container of objects that are inserted and removed according to the last-in first-out (LIFO) principle. In the pushdown stacks only two operations are allowed: push the item into the stack, and pop the item out of the stack. A stack is a limited access data structure - elements can be added and removed from the stack only at the top. push adds an item to the top of the stack, pop removes the item from the top. A helpful analogy is to think of a stack of books; you can remove only the top book, also you can add a new book on the top.

![Simple_Shell](https://www.cs.cmu.edu/~adamchik/15-121/lectures/Stacks%20and%20Queues/pix/stack.bmp) 

### Queues
------

A queue is a container of objects (a linear collection) that are inserted and removed according to the first-in first-out (FIFO) principle. An excellent example of a queue is a line of students in the food court of the UC. New additions to a line made to the back of the queue, while removal (or serving) happens in the front. In the queue only two operations are allowed enqueue and dequeue. Enqueue means to insert an item into the back of the queue, dequeue means removing the front item. The picture demonstrates the FIFO access.

![Simple_Shell](https://www.cs.cmu.edu/~adamchik/15-121/lectures/Stacks%20and%20Queues/pix/queue.bmp)

## Coding style
--------
- All C files are compiled on Ubuntu 14.04 LTS and using Betty Style for checking coding and documentation styles.

## test the operation
-----------------------------------
- Clone this repo:
 ```sh
    $ git clone https://github.com/ronald0204/monty.git
```
 - Compile with
 ```sh
    $ gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```
- Execute it:

```sh
    $ ./monty
```

## Opcode
------------------- 
| Opcode | Desc |
| ------ | ------ |
| push | pushes an element to the stack. |
| pall | prints all the values on the stack |
| pint | prints the value at the top of the stack, followed by a new line. |
| pop | removes the top element of the stack. |
| swap | swap the first two element of the stack. |
| add | adds the top two elements of the stack. |
| nop | do nothing |

## Example pall
-------------
```sh
julien@ubuntu:~/monty$ cat -e bytecodes/00.m
push 1$
push 2$
push 3$
pall$
julien@ubuntu:~/monty$ ./monty bytecodes/00.m
3
2
1
julien@ubuntu:~/monty$
```
## Example pint
-----------
```sh
julien@ubuntu:~/monty$ cat bytecodes/06.m 
push 1
pint
push 2
pint
push 3
pint
julien@ubuntu:~/monty$ ./monty bytecodes/06.m 
1
2
3
julien@ubuntu:~/monty$ 
```
## Example pop
-----------
```sh
julien@ubuntu:~/monty$ cat bytecodes/07.m 
push 1
push 2
push 3
pall
pop
pall
pop
pall
pop
pall
julien@ubuntu:~/monty$ ./monty bytecodes/07.m 
3
2
1
2
1
1
julien@ubuntu:~/monty$ 
```

## Example swap
-----------
```sh
julien@ubuntu:~/monty$ cat bytecodes/09.m 
push 1
push 2
push 3
pall
swap
pall
julien@ubuntu:~/monty$ ./monty bytecodes/09.m 
3
2
1
2
3
1
julien@ubuntu:~/monty$ 
```
## Example add
-----------
```sh
julien@ubuntu:~/monty$ cat bytecodes/12.m 
push 1
push 2
push 3
pall
add
pall

julien@ubuntu:~/monty$ ./monty bytecodes/12.m 
3
2
1
5
1
julien@ubuntu:~/monty$
```

## Reference
 **Stacks and Queues:** [Stacks and Queues](https://www.cs.cmu.edu/~adamchik/15-121/lectures/Stacks%20and%20Queues/Stacks%20and%20Queues.html)
 
## Authors
  **GitHub**[@ronald0204](https://github.com/ronald0204)
 **Twiitter:** [@ronald45251997](https://twitter.com/ronald45251997)