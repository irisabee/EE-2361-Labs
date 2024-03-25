#include "xc.h"
#include "bolto092_lab6_circbuffer.h"
int adcbuffer[BUFSIZE];
int bufferindex = 0;

//Initilizes all the values in the buffer to 0
void initBuffer() {
    int i;
    
    for(i = 0; i < BUFSIZE; i++) {
        adcbuffer[i] = 0;
    }
}

//Adds a new Value to the buffer
void putVal(int newValue) {
    
    if(bufferindex >= BUFSIZE) {
        bufferindex=0;
    }
    
    adcbuffer[bufferindex++] = newValue;
    
}

//Gets Average of the values in the buffer
int getAvg() {
    int i = 0;
    int sum = 0;
    int avg = 0;
    
    while(i < 128) {
        sum = sum + adcbuffer[(bufferindex - i) % BUFSIZE ];
        i++;
    }
    
    avg = sum/128;
    
    return avg;
} 
