/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Table.h
 * Author: lminozzo
 *
 * Created on 1 de Abril de 2019, 22:59
 */

#ifndef TABLE_H
#define TABLE_H

#ifdef __cplusplus
extern "C" {
#endif
#include<stdlib.h>
#include <stdio.h>
    
    typedef struct {
        FILE *filePointer;
        char *HTMLContent;
        long  HTMLFileSize;
    }HtmlFile;
    
    HtmlFile* HtmlFile_new(const char *fileName);
    long HtmlFile_getFileSize(const HtmlFile *self);
    void _HtmlFile_destroy(HtmlFile *self);
    


#ifdef __cplusplus
}
#endif

#endif /* TABLE_H */

