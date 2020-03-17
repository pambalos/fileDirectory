//
// Created by Justice, Bradley on 3/17/20.
//
/*
 Good clean structure

 What is file type?  is it a list of values or an arbitrary string?  Is it part of the file name or separate?

 Does this represent all you meta data?

 Do we want to enable clusters? - Think about waste, large files enable clustering, but lost of small files cluster is bad

 Waste = size_block/2 (larger blocks = more waste)
*/


#ifndef FILEDIRECTORY_DIRECTORY_H
#define FILEDIRECTORY_DIRECTORY_H



typedef struct Dir_Entry {
    char name[30];
    char file_type[10];
    unsigned char permissions;
    unsigned long int date_created;
    unsigned long int date_modified;
    unsigned long long size;
    unsigned long long location;
};

typedef struct File_System_Info {
    struct Dir_Entry *root;

};

#endif //FILEDIRECTORY_DIRECTORY_H
