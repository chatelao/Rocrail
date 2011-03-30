///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Dec 21 2009)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __stagedlggen__
#define __stagedlggen__

#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/sizer.h>
#include <wx/statline.h>
#include <wx/spinctrl.h>
#include <wx/panel.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/listbox.h>
#include <wx/combobox.h>
#include <wx/button.h>
#include <wx/notebook.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////

#define ID_STAGEBOOK 1000

///////////////////////////////////////////////////////////////////////////////
/// Class stagedlggen
///////////////////////////////////////////////////////////////////////////////
class stagedlggen : public wxDialog 
{
	private:
	
	protected:
		wxNotebook* m_Notebook;
		wxPanel* m_General;
		wxStaticText* m_labID;
		wxTextCtrl* m_ID;
		wxStaticText* m_labDescription;
		wxTextCtrl* m_Description;
		wxStaticLine* m_staticline1;
		wxStaticText* m_labSectionLength;
		wxSpinCtrl* m_SectionLength;
		wxStaticText* m_labTrainGap;
		wxSpinCtrl* m_TrainGap;
		wxPanel* m_Sections;
		wxListBox* m_SectionList;
		wxStaticText* m_labSectionID;
		wxTextCtrl* m_SectionID;
		wxStaticText* m_labSectionSensor;
		wxComboBox* m_SectionSensor;
		wxButton* m_AddSection;
		wxButton* m_ModifySection;
		wxButton* m_DeleteSection;
		wxStdDialogButtonSizer* m_sdbSizer2;
		wxButton* m_sdbSizer2OK;
		wxButton* m_sdbSizer2Cancel;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnSectionList( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSectionAdd( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSectionModify( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSectionDelete( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnCancel( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnOK( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		stagedlggen( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Staging Yard"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );
		~stagedlggen();
	
};

#endif //__stagedlggen__
