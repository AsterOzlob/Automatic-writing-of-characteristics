#pragma once

namespace �������� {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//����������� ����������� ��� ��� ������ � �������
	using namespace System::IO;
	using namespace System::Text;

	/// <summary>
	/// ������ ��� UserHelp
	/// </summary>
	public ref class UserHelp : public System::Windows::Forms::Form
	{
	public:
		UserHelp(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~UserHelp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  helpMenuStrip;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  �������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���������������ToolStripMenuItem;
	private: System::Windows::Forms::RichTextBox^  helpRichTextBox;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������������ToolStripMenuItem;

	private:
		/// <summary>
		/// ��������� ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ������������ ����� ��� ��������� ������������ - �� ���������
		/// ���������� ������� ������ ��� ������ ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(UserHelp::typeid));
			this->helpMenuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->�������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpRichTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->��������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpMenuStrip->SuspendLayout();
			this->SuspendLayout();
			// 
			// helpMenuStrip
			// 
			this->helpMenuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->�������������ToolStripMenuItem, 
				this->���������������ToolStripMenuItem, this->��������������ToolStripMenuItem});
			this->helpMenuStrip->Location = System::Drawing::Point(0, 0);
			this->helpMenuStrip->Name = L"helpMenuStrip";
			this->helpMenuStrip->ShowItemToolTips = true;
			this->helpMenuStrip->Size = System::Drawing::Size(447, 28);
			this->helpMenuStrip->TabIndex = 0;
			this->helpMenuStrip->Text = L"helpMenuStrip";
			// 
			// �������������ToolStripMenuItem
			// 
			this->�������������ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Size = System::Drawing::Size(139, 24);
			this->�������������ToolStripMenuItem->Text = L"����� ��������";
			this->�������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &UserHelp::�������������ToolStripMenuItem_Click);
			// 
			// ���������������ToolStripMenuItem
			// 
			this->���������������ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->���������������ToolStripMenuItem->Name = L"���������������ToolStripMenuItem";
			this->���������������ToolStripMenuItem->Size = System::Drawing::Size(155, 24);
			this->���������������ToolStripMenuItem->Text = L"�������� �������";
			this->���������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &UserHelp::���������������ToolStripMenuItem_Click);
			// 
			// helpRichTextBox
			// 
			this->helpRichTextBox->DetectUrls = false;
			this->helpRichTextBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->helpRichTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->helpRichTextBox->Location = System::Drawing::Point(0, 28);
			this->helpRichTextBox->MaxLength = 50000;
			this->helpRichTextBox->Name = L"helpRichTextBox";
			this->helpRichTextBox->ReadOnly = true;
			this->helpRichTextBox->Size = System::Drawing::Size(447, 473);
			this->helpRichTextBox->TabIndex = 1;
			this->helpRichTextBox->Text = L"";
			// 
			// ��������������ToolStripMenuItem
			// 
			this->��������������ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->��������������ToolStripMenuItem->Name = L"��������������ToolStripMenuItem";
			this->��������������ToolStripMenuItem->Size = System::Drawing::Size(144, 24);
			this->��������������ToolStripMenuItem->Text = L"������� �������";
			this->��������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &UserHelp::��������������ToolStripMenuItem_Click);
			// 
			// UserHelp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(447, 501);
			this->Controls->Add(this->helpRichTextBox);
			this->Controls->Add(this->helpMenuStrip);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->helpMenuStrip;
			this->MaximizeBox = false;
			this->Name = L"UserHelp";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"�������";
			this->helpMenuStrip->ResumeLayout(false);
			this->helpMenuStrip->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private:
	//������� ������ ������ �� �����
	//���������: ��� �����, ��������� ����, � ������� �������������� �����
	void LoadFromFile(String^ file, RichTextBox^ data)
	{
		//������ ��� ������ �� �����
		StreamReader^ sr = gcnew StreamReader(file);
		String^ line; //����������� ������
		while((line = sr->ReadLine()) != nullptr)
			data->Text += line + "\r\n";
		sr->Close();
	}

	//����� ��������
private: System::Void �������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			helpRichTextBox->Clear();
			LoadFromFile("General information.txt", helpRichTextBox);
		}
	//�������� ��������
private: System::Void ���������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 helpRichTextBox->Clear();
			 LoadFromFile("Create Templates.txt", helpRichTextBox);
		 }
	//������� �������
private: System::Void ��������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 helpRichTextBox->Clear();
			 LoadFromFile("FuncKeys.txt", helpRichTextBox);
		 }
};
}
