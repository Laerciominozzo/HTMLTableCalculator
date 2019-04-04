/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Automato.h
 * Author: lminozzo
 *
 * Created on 2 de Abril de 2019, 23:08
 */

#ifndef AUTOMATO_H
#define AUTOMATO_H

#ifdef __cplusplus
extern "C" {
#endif
    
   
    
    typedef enum{
        NONE,
        NUMBER,
        COLUMN,
        LINE
    }Token;
    
     
    typedef struct{
        char *Symbols;
        Node *Nodes;
        Token token;
    }Node;
    
    typedef struct {
        Node *root;
    }SearchTree;

     const static Node NODES[] = [
                {.Nodes = [&NODES+1,&NODES+1,&NODES+1,&NODES+1,&NODES+1,&NODES+1,&NODES+1,&NODES+1,&NODES+1,&NODES+1,&NODE+3],
                 .Symbols = ['1','2','3','4','5','6','7','8','9','0','<'],
                 .token = NONE},
             
                {.Nodes = [&NODES+1,&NODES+1,&NODES+1,&NODES+1,&NODES+1,&NODES+1,&NODES+1,&NODES+1,&NODES+1,&NODES+1,&NODES+2],
                 .Symbols = ['1','2','3','4','5','6','7','8','9','0','.'],
                 .token = NUMBER},
                         
                {.Nodes = [&NODES+1,&NODES+1,&NODES+1,&NODES+1,&NODES+1,&NODES+1,&NODES+1,&NODES+1,&NODES+1,&NODES+1],
                 .Symbols = ['1','2','3','4','5','6','7','8','9','0'],
                 .token = NONE},
                 
                {.Nodes = [&NODES+4],
                 .Symbols = ['t'],
                 .token = NONE}
     ];
#ifdef __cplusplus
}
#endif

#endif /* AUTOMATO_H */

