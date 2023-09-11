#include<stdio.h>
#include<pthread.h>


void* B(void *  arg)
 {   
    printf("fie");
    //return '/0';
 }

void* A(void * arg){
    pthread_t t2;
    printf("foo  ");
    
    //pthread_attr_t *tattr;
   pthread_create(&t2, NULL , B, NULL); 
   
    printf("far");
    pthread_join(t2, NULL);
    printf("fum");

    //return '/0';
}



void threadtest(){
    pthread_t t;
    pthread_attr_t *tattr;
    // int ret;

   // t->set_priority(20);
    pthread_attr_init(tattr);


    int var = 0;
    void * abc;
    printf("fee ");
    pthread_create(&t, NULL , A, NULL); 
   
     //int pthread_create( 
   // void *(*__start_routine)(void *), void *__restrict__ __arg)
    //   
    //  void *__restrict__ __arg)
    
    printf("foe ");
    pthread_join(t, NULL);
    printf("fun \n");


}

int main()
{
    threadtest();
    return 0;
} 