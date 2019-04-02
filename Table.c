/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Table.h"
#include <stdlib.h>
#include <stdio.h>

 HtmlFile* HtmlFile_new(const char *fileName){
     
     HtmlFile htmlFile = fopen ( fileName , "rb" );
     if (htmlFile==NULL) {fputs ("File error",stderr); exit (1);}
     
     
 }
 
 long HtmlFile_getFileSize(const HtmlFile *htmlFile){
     long fileSize;
     fseek (htmlFile , 0 , SEEK_END);
     fileSize = ftell (htmlFile);
     rewind (htmlFile);
 }
 
 void _HtmlFile_new(const char *fileName){
     
 }