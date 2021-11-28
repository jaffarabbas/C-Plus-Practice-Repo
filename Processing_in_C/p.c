#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

void writeBuffer();
void readBuffer();
void readingTextFile();
void creatingFileAndApendingCode();
void showingAppendedFileData();
void calculateLength();
void copyContent();

int main(){
	copyContent();
	return 0;
}

//for write a buffer
void writeBuffer(){
	char buff[] = "Hello jaffar here";
	write(1,buff,sizeof(buff));
}
//read buffer
readBuffer(){
	char buff[30];
	int buffValue = read(0,buff,sizeof(buff));
	write(1,buff,buffValue);
}
//reading text file
void readingTextFile(){
	char buff[50];
	int fileDiscripter = open("new.txt",O_RDONLY);
	printf("\nFile value : %d\n",fileDiscripter);
	//10 values of file
	int fileValue = read(fileDiscripter,buff,10);
	//print file value to console
	write(1,buff,fileValue);
}
//reading file data and adding in a new file by creating it
void creatingFileAndApendingCode(){
	char buff[50];
	int fileDiscripter = open("new.txt",O_RDONLY);
	int fileValue = read(fileDiscripter,buff,10);
	//create new file or update it 0777 is file permission in linux 0 means file 777 means access by all
	int newFile = open("newFile.txt",O_WRONLY|O_CREAT,0777);
	write(newFile,buff,fileValue);
}
//paper question
//showing one file in another with out updating it
void showingAppendedFileData(){
	char buff[50];
	int fileDiscripter = open("f1.txt",O_RDONLY);
	//reading data from file f1
	int fileValue = read(fileDiscripter,buff,20);
	//appending content to a file f2
	int appending = open("f2.txt", O_WRONLY | O_APPEND);
	write(appending,buff,fileValue);
	//print value of f1 in console
	write(1,buff,20);
}
//coping one file ocntent to another
void copyContent(){
	char buff[30];
	int fd = open("d.txt",O_RDONLY);
	int fv = read(fd,buff,sizeof(buff));
	int nf = open("d2.txt",O_WRONLY | O_CREAT,0777);
	write(nf,buff,fv);
}
//calclulating name length
void calculateLength(){
	char buff[10];
	int fileDispriter = open("new.txt",O_RDONLY);
	int value = read(fileDispriter,buff,sizeof(buff));
	int count = write(1,buff,value);
	printf("\n%d",count);
}
