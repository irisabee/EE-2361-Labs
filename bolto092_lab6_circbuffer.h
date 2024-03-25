/* 
 * File:   bolto092_lab6_circbuffer.h
 * Author: irisbolton
 *
 * Created on May 1, 2023, 1:29 PM
 */

#ifndef BOLTO092_LAB6_CIRCBUFFER_H
#define	BOLTO092_LAB6_CIRCBUFFER_H

#ifdef	__cplusplus
extern "C" {
#endif

#define BUFSIZE 1024
    

    
    
    	void putVal(int newValue);	// add a new value to the buffer
        int getAvg();          	// average all buffer vals
        void initBuffer();		// set all buffer vals to zero


#ifdef	__cplusplus
}
#endif

#endif	/* BOLTO092_LAB6_CIRCBUFFER_H */

