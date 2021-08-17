#include "Command.h"

typedef void notepad;

class OpenCommand :public Command
{
public:
	OpenCommand(notepad* nInstance);//instance of program on which this file will be added
	virtual void Execute() override;

	virtual ~OpenCommand() { }

protected:
	virtual const char* AskUser(); //ask user the path of file which need to be opened in current instance of notepad
private:
	notepad* nInstance;
	char* filePath;
};

OpenCommand::OpenCommand(notepad* nInstance)
{
	this->nInstance = nInstance;
	filePath = nullptr;
}

inline void OpenCommand::Execute()
{
	filePath = (char*)"path_to_file";//AskUser();//ask user about the file to be opened

	if (filePath != nullptr)
	{
		printf("Open %s , in current Notepad Instance\n", filePath);
#if 0
		nInstance->Add(filePath);
		nInstance->open();
#endif
	}
}

inline const char* OpenCommand::AskUser()
{
	cout << "Give UI PopUp to User, and ask user to input name.\n";
	cout << "maybe call nInstance->AskUser() function for delegating behvaiour of document related to actual instance\n";

	return nullptr;
}
