#Null-pointer Dereference
In xv6 , currenlty the address space of a user program starts at address location 0,
Hence NULL pointer deference doesnt throw an error.
* I have modified the code so that the first page of address is not used,
  hence any deference to a NULL pointer will throw and trap error.
* Have modifed the pointer deference in a system call to check if the address is not 
  in the 0th page else throw error.

# Stack-Relocation-xv6-kernel

The xv6 address space is currently set up like this:

code
stack (fixed-sized, one page)
heap (grows towards the high-end of the address space)

In this part of the xv6 project, I have changed the address space to look like this:

code
heap (grows towards the high-end of the address space)
... (gap)
stack (at end of address space; grows backwards)
