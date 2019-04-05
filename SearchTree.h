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
    /*0*/       {.Nodes = [&NODES+1,&NODES+1,&NODES+1,&NODES+1,&NODES+1,&NODES+1,&NODES+1,&NODES+1,&NODES+1,&NODES+1,&NODE+3],
                 .Symbols = ['1','2','3','4','5','6','7','8','9','0','<'],
                 .token = NONE},
             
    /*1*/       {.Nodes = [&NODES+1,&NODES+1,&NODES+1,&NODES+1,&NODES+1,&NODES+1,&NODES+1,&NODES+1,&NODES+1,&NODES+1,&NODES+2],
                 .Symbols = ['1','2','3','4','5','6','7','8','9','0','.'],
                 .token = NUMBER},
                         
    /*2*/       {.Nodes = [&NODES+1,&NODES+1,&NODES+1,&NODES+1,&NODES+1,&NODES+1,&NODES+1,&NODES+1,&NODES+1,&NODES+1],
                 .Symbols = ['1','2','3','4','5','6','7','8','9','0'],
                 .token = NONE},
                 
    /*3*/       {.Nodes = [&NODES+4,&NONE+7],
                 .Symbols = ['t','l'],
                 .token = NONE},
                         
    /*4*/       {.Nodes = [&NODES+5],
                 .Symbols = ['l'],
                 .token = NONE},
                         
    /*5*/       {.Nodes = [&NODES+6],
                 .Symbols = ['>'],
                 .token = NONE},
                         
    /*6*/       {.Nodes = [],
                 .Symbols = [],
                 .token = LINE},
                         
    /*7*/       {.Nodes = [&NODES+8],
                 .Symbols = ['d'],
                 .token = NONE},
                         
    /*8*/       {.Nodes = [&NODES+9],
                 .Symbols = ['>'],
                 .token = NONE},
                         
    /*9*/       {.Nodes = [],
                 .Symbols = [],
                 .token = COLUMN}                    
    ];
#ifdef __cplusplus
}
#endif

#endif /* AUTOMATO_H */

