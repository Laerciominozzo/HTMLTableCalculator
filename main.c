/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: lminozzo
 *
 * Created on 1 de Abril de 2019, 22:58
 */

#include <stdio.h>
#include <stdlib.h>

#include "Table.h"
#include "SearchTree.h"
/*
 * 
 */
int main(int argc, char** argv) {
    HtmlFile *htmlFile = HtmlFile_new("/home/lminozzo/Documentos/Histórico_ILHA");
    printf("%s", htmlFile->HTMLContent);
    
    _HtmlFile_destroy(htmlFile);
    return (EXIT_SUCCESS);
}

