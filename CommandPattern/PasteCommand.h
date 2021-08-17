#include "Command.h"
#include <stack>

typedef void Document;

class PasteCommand :public Command
{
public:
	PasteCommand(Document*);
	virtual void Execute() override;

	void undo();
private:
	Document* doc;
	stack<string> st;
};

PasteCommand::PasteCommand(Document* d)
{
	this->doc = d;
}

inline void PasteCommand::Execute()
{
	//Store current state for undoing later
	cout << "do Paste\n";
#if 0
	st.push(doc->clipboard());

	doc->paste(doc->clipboard());
#endif
}

inline void PasteCommand::undo()
{
	// undo  the last paste

	cout << "undo Paste\n";
	if (st.empty() == true)
		return;
#if 0
	doc->eraseFromLast(doc->clipboard()->length());
#endif

}