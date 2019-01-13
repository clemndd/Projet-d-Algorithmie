/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newfile.h
 * Author: clemence.nadaud
 *
 * Created on 7 janvier 2019, 19:13
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h>

#ifndef NEWFILE_H
#define NEWFILE_H



void reglesv1();
void jeuv1();
void initSecretv1(int secret[]);
void initSecretChoixv1(int secret[]);
int selectionv1(int reponse[]);
int verificationv1(int reponse[], int secret[]);

void color(int t,int f);

#endif /* NEWFILE_H */

