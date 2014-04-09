
// MFCApplicationDlg.h : ヘッダー ファイル
//

#pragma once


// CMFCApplicationDlg ダイアログ
class CMFCApplicationDlg : public CDialog
{
// コンストラクション
public:
	CMFCApplicationDlg(CWnd* pParent = NULL);	// 標準コンストラクター

// ダイアログ データ
	enum { IDD = IDD_MFCAPPLICATION_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV サポート
	

// 実装
protected:
	HICON m_hIcon;
	CWinFormsControl<WindowsFormsControlLibraryForMFC::WinFromGrid> m_grid;

	// 生成された、メッセージ割り当て関数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
