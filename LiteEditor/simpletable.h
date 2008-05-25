//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
// copyright            : (C) 2008 by Eran Ifrah                            
// file name            : simpletable.h              
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
 #ifndef __simpletable__
#define __simpletable__

/**
@file
Subclass of SimpleTableBase, which is generated by wxFormBuilder.
*/

#include "simpletablebase.h"

/** Implementing SimpleTableBase */
class SimpleTable : public SimpleTableBase
{
	long m_selectedId;
	wxMenu *m_rclickMenu;

private:
	wxString GetColumnText(long indx, long column);
	void SetColumnText ( long indx, long column, const wxString &rText );
	long FindExpressionItem(const wxString &expression);

protected:
	// Handlers for SimpleTableBase events.
	void OnItemActivated( wxListEvent& event );
	void OnItemSelected( wxListEvent& event );
	void OnListKeyDown( wxListEvent& event );
	void OnItemRightClick(wxListEvent& event);
	void InitTable();
	void OnNewWatch(wxCommandEvent &event);
	void OnNewWatchUI(wxUpdateUIEvent &event);
	void OnDeleteAll(wxCommandEvent &event);
	void OnDeleteAllUI(wxUpdateUIEvent &event);
	void OnDeleteWatch(wxCommandEvent &event);
	void OnDeleteWatchUI(wxUpdateUIEvent &event);
	void OnItemDeSelected(wxListEvent &event);
	void DoShowMoreDetails(long item);
	void OnMenuExpandExpr(wxCommandEvent &event);
	void OnMenuEditExpr(wxCommandEvent &event);
	void OnMenuDerefExpr(wxCommandEvent &event);
	void OnListEditLabelEnd(wxListEvent &event);

public:
	/** Constructor */
	SimpleTable( wxWindow* parent );
	virtual ~SimpleTable();

	void AddExpression(const wxString &expr);
	void UpdateExpression(const wxString &expr, const wxString &value);
	wxArrayString GetExpressions();
	void Clear();
	void RefreshValues();
};

#endif // __simpletable__
