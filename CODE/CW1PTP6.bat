@echo off

REM Create the main folder
mkdir The_Bag

REM Create three folders inside The_bag
mkdir The_Bag\Folder1
mkdir The_Bag\Folder2
mkdir The_Bag\Folder3 

REM Create three empty text files
type nul > The_Bag\Folder1\File1.txt
type nul > The_Bag\Folder2\File2.txt
type nul > The_Bag\Folder3\File3.txt
 
 REM Display the completion message
 echo The 6 items are in The Bag!

 pause
