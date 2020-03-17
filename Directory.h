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

enum FileType {
    txt, zip, sh, exe, pdf, bat
};


typedef struct Dir_Entry {
    char name[30];
    enum FileType file_type;
    unsigned char permissions;
    unsigned long int date_created;
    unsigned long int date_modified;
    unsigned long long size;

};

typedef struct File_System_Info {
    struct Dir_Entry *root;
    struct Dir_Entry **LBA; //LBA points to our
    struct Dir_Entry **Free_Blocks;
    struct Dir_Entry **Free_Blocks2;
    unsigned long int volume_size;
    char volume_name[30];
    unsigned int volume_id;
    unsigned short int lba_size;
};

#endif //FILEDIRECTORY_DIRECTORY_H
