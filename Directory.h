//
// Created by Justice, Bradley on 3/17/20.
//

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

};

#endif //FILEDIRECTORY_DIRECTORY_H
