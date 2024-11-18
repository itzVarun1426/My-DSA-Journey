//wild pointer :
    // wild pointer is a type of pointer where we declare the poiter but not initialize it
    // due to this it end up pointing to random location due to this we get some undefined behaviour and error in some cases we might get segmentation fault
//null pointer : 
    //if we want to have a pointer variable which is just declared but will get address later to store we can use NULL pointer 
    //int *ptr = NULL;
    //0 is mostly a special reserved memory address in many os runtime error will occur on dereferencing null pointer
//dangling pointer :
    //dangling pointer is a pointer that points to the memory location that is not valid 
    //int main(){
    // int *ptr=NULL;
    // {
    //     int x = 10;
    //     ptr = &x;
    // }
    // cout<<ptr<<" " <<*ptr<<endl;
    // }
//void pointer :
    //these are special pointers that can point to be any datatype value
    //this type of pointer cant be dereferenced
    //only way is to typecast it
    //int x= 10;
    //void *ptr = &x;
    //int *ptr = (int *)ptr;
    //cout<<*ptr<<endl;
    