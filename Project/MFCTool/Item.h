#pragma once
// CItem
class CMFCToolView;
class CItem
{
public:
	CItem();
	~CItem();

public:
	HRESULT Ready_Item();
	void Render_Item();
	void Mini_Render_Item();
	void Release();
};


