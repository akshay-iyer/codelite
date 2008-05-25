//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
// copyright            : (C) 2008 by Eran Ifrah                            
// file name            : newclassdlg.h              
//                                                                          
// -------------------------------------------------------------------------
// A                                                                        
//              _____           _      _     _ _                            
//             /  __ \         | |    | |   (_) |                           
//             | /  \/ ___   __| | ___| |    _| |_ ___                      
//             | |    / _ \ / _  |/ _ \ |   | | __/ _ \                     
//             | \__/\ (_) | (_| |  __/ |___| | ||  __/                     
//              \____/\___/ \__,_|\___\_____/_|\__\___|                     
//                                                                          
//                                                  F i l e                 
//                                                                          
//    This program is free software; you can redistribute it and/or modify  
//    it under the terms of the GNU General Public License as published by  
//    the Free Software Foundation; either version 2 of the License, or     
//    (at your option) any later version.                                   
//                                                                          
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
 #ifndef __newclassdlg__
#define __newclassdlg__

/**
@file
Subclass of NewClassBaseDlg, which is generated by wxFormBuilder.
*/

#include "newclassbasedlg.h"
#include "vector"

class IManager;

struct ClassParentInfo {
	wxString name;
	wxString access;
};

struct NewClassInfo {
	wxString name;
	wxString path;
	wxString fileName;
	bool isSingleton;
	bool isAssingable;
	bool isVirtualDtor;
	bool implAllPureVirtual;
	bool implAllVirtual;
	std::vector< ClassParentInfo > parents;
};

/** Implementing NewClassBaseDlg */
class NewClassDlg : public NewClassBaseDlg
{
	long m_selectedItem;
	IManager *m_mgr;
protected:
	// Handlers for NewClassBaseDlg events.
	void OnListItemActivated( wxListEvent& event );
	void OnListItemSelected( wxListEvent& event );
	void OnButtonAdd( wxCommandEvent& event );
	void OnButtonDelete( wxCommandEvent& event );
	void OnButtonDeleteUI( wxUpdateUIEvent& event );
	void OnListItemDeSelected(wxListEvent &e);
	void OnButtonOK(wxCommandEvent &e);
	void OnCheckEnterFileNameManually(wxCommandEvent &e);
	bool ValidateInput();
	void OnTextEnter(wxCommandEvent &e);
	void OnCheckImpleAllVirtualFunctions(wxCommandEvent &e);
	
public:
	/** Constructor */
	NewClassDlg( wxWindow* parent, IManager *mgr );
	void GetNewClassInfo(NewClassInfo &info);
	
	void GetInheritance(std::vector< ClassParentInfo > &inheritVec);
	bool IsSingleton() {return m_checkBox6->GetValue();}
	wxString GetClassName(){return m_textClassName->GetValue();}
	wxString GetClassPath();
	wxString GetClassFile();
	bool IsCopyableClass(){return !m_checkBoxCopyable->IsChecked();}
};

#endif // __newclassdlg__
