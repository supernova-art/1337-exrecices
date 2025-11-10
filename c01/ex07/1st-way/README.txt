
>>>>>>>>>>>>>>>>>>>>EXERCICE 07<<<<<<<<<<<<<<<<<<<<<<<<<<<
NOTE : if u want to nwo what is the exercice , plz feel 
free to read the subject .
subject path : /kali/home/DAYS/c01/ex07/subject

in this Breakdown we will split the explanation on 2 parts

Part 01 : the dedicated function .
in taht part we will be talking abt the following lines :

 1  #include <stdio.h>
       
     2  void ft_rev_int_tab(int *tab, int size)
     3  {
     4          int tmp;
     5          int first;
     6          int last;
       
     7          first = 0;
     8          last = size - 1;
       
     9          tmp = tab[first];
    10          tab[first] = tab[last];
    11          tab[last] = tmp;
    12          first++;
    13          last--;
    14  }

line 1 : Declaring te function as it should be prototyped
lines 4 - 6 : Declaring variables that we gonna use in our 
swap.
lines 7 & 8 : passing value to the first and last variables.
lines 9 - 11 : sawaping process .
line 12 : increment of the first variable .
line 13 : decrement of the last variable .

to make this explanation more close to this shity reality 
imagine bringing 3 goblets and swaping 2 diffrent drinks 
(atay & 9ahwa hhhh) . u cannot swap 2 drinks using only 2 
goblets , u gonna need an extra cup where to "khalet & 
jakhlet".

Part 02 : the int main()

15  int main()
    16  {
    17          int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    18          int size = 10;
    19          int i;
       
    20          ft_rev_int_tab(arr, size);
    21          printf("Reversed arr : ");
       
    22          i = 0;
    23          while(i < size)
    24          {
    25                  printf("%d ", arr[i]);
    26                  i++;
    27          }
       
    28          printf("\n");
    29          return 0;
    30  }


line 17 & 18 : declaring and arr and it's size .
line 19 : declaring an int that we're using later in a loop
line 20 : Recursion of the function and passing the arr 
and the size as parametrs .
line 21 : just an output to tell what expecting .
linea 22 - 27 : using that int we declared before , by 
giving it a value 0 as index where to start and a while 
loop with a condition ( while that i isn't greater than 
the size keep printing arr[i] and keep incrementing that i.
