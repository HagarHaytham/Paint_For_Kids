#ifndef ACTION_H
#define ACTION_H

#include "..\DefS.h"

class ApplicationManager; //forward class declaration


//Base class for all possible actions
class Action
{
protected:
	ApplicationManager *pManager;	//Actions needs AppMngr to do their job
	static bool saved;
public:
	
	Action(ApplicationManager *pApp) { pManager = pApp;}	//constructor

	//Reads parameters required for action to execute (code depends on action type)
	virtual bool ReadActionParameters() =0;
	
	//Execute action (code depends on action type)
	virtual bool Execute() =0;

	//To undo this action (code depends on action type)
	//virtual void Undo()=0;

	//To redo this action (code depends on action type)
	//virtual void Redo()=0;

	virtual~Action(){};

};



#endif