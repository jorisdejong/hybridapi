/*
  ==============================================================================

    FileHelper.h
    Created: 20 Feb 2016 5:58:44pm
    Author:  Joris de Jong

  ==============================================================================
*/

#ifndef FILEHELPER_H_INCLUDED
#define FILEHELPER_H_INCLUDED

#include "JuceHeader.h"

//FileHelper takes care of all the reading of the different files

class FileHelper
{
public:
	FileHelper();
	~FileHelper();

	static bool isFileValid( File fileToCheck, bool giveFeedback );
	
	/*this will return either the Arena 5 or Arena 4 ass file*/
	static File getAssFileAutomagically( bool showDialog );
	static File getArenaCompFileByVersion( int version );

private:

	static File getAssFileByVersion( File advancedFile, int version, bool showDialog );
			
	static void throwLoadError();
	static void throwSaveError();
	static void throwVersionError();
	static void throwEmptyError();
};



#endif  // FILEHELPER_H_INCLUDED