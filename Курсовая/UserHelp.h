#pragma once

namespace Курсовая {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//Подключение пространств имён для работы с файлами
	using namespace System::IO;
	using namespace System::Text;

	/// <summary>
	/// Сводка для UserHelp
	/// </summary>
	public ref class UserHelp : public System::Windows::Forms::Form
	{
	public:
		UserHelp(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
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
	private: System::Windows::Forms::ToolStripMenuItem^  общиеСведенияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  созданиеШаблонаToolStripMenuItem;
	private: System::Windows::Forms::RichTextBox^  helpRichTextBox;
	private: System::Windows::Forms::ToolStripMenuItem^  горячиеКлавишиToolStripMenuItem;

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(UserHelp::typeid));
			this->helpMenuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->общиеСведенияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->созданиеШаблонаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpRichTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->горячиеКлавишиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpMenuStrip->SuspendLayout();
			this->SuspendLayout();
			// 
			// helpMenuStrip
			// 
			this->helpMenuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->общиеСведенияToolStripMenuItem, 
				this->созданиеШаблонаToolStripMenuItem, this->горячиеКлавишиToolStripMenuItem});
			this->helpMenuStrip->Location = System::Drawing::Point(0, 0);
			this->helpMenuStrip->Name = L"helpMenuStrip";
			this->helpMenuStrip->ShowItemToolTips = true;
			this->helpMenuStrip->Size = System::Drawing::Size(447, 28);
			this->helpMenuStrip->TabIndex = 0;
			this->helpMenuStrip->Text = L"helpMenuStrip";
			// 
			// общиеСведенияToolStripMenuItem
			// 
			this->общиеСведенияToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->общиеСведенияToolStripMenuItem->Name = L"общиеСведенияToolStripMenuItem";
			this->общиеСведенияToolStripMenuItem->Size = System::Drawing::Size(139, 24);
			this->общиеСведенияToolStripMenuItem->Text = L"Общие сведения";
			this->общиеСведенияToolStripMenuItem->Click += gcnew System::EventHandler(this, &UserHelp::общиеСведенияToolStripMenuItem_Click);
			// 
			// созданиеШаблонаToolStripMenuItem
			// 
			this->созданиеШаблонаToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->созданиеШаблонаToolStripMenuItem->Name = L"созданиеШаблонаToolStripMenuItem";
			this->созданиеШаблонаToolStripMenuItem->Size = System::Drawing::Size(155, 24);
			this->созданиеШаблонаToolStripMenuItem->Text = L"Создание шаблона";
			this->созданиеШаблонаToolStripMenuItem->Click += gcnew System::EventHandler(this, &UserHelp::созданиеШаблонаToolStripMenuItem_Click);
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
			// горячиеКлавишиToolStripMenuItem
			// 
			this->горячиеКлавишиToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->горячиеКлавишиToolStripMenuItem->Name = L"горячиеКлавишиToolStripMenuItem";
			this->горячиеКлавишиToolStripMenuItem->Size = System::Drawing::Size(144, 24);
			this->горячиеКлавишиToolStripMenuItem->Text = L"Горячие клавиши";
			this->горячиеКлавишиToolStripMenuItem->Click += gcnew System::EventHandler(this, &UserHelp::горячиеКлавишиToolStripMenuItem_Click);
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
			this->Text = L"Справка";
			this->helpMenuStrip->ResumeLayout(false);
			this->helpMenuStrip->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private:
	//Функция вывода данных из файла
	//Аргументы: имя файла, текстовое поле, в которое осуществляется вывод
	void LoadFromFile(String^ file, RichTextBox^ data)
	{
		//Объект для чтения из файла
		StreamReader^ sr = gcnew StreamReader(file);
		String^ line; //Считывающая строка
		while((line = sr->ReadLine()) != nullptr)
			data->Text += line + "\r\n";
		sr->Close();
	}

	//Общие сведения
private: System::Void общиеСведенияToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			helpRichTextBox->Clear();
			LoadFromFile("General information.txt", helpRichTextBox);
		}
	//Создание шаблонов
private: System::Void созданиеШаблонаToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 helpRichTextBox->Clear();
			 LoadFromFile("Create Templates.txt", helpRichTextBox);
		 }
	//Горячие клавиши
private: System::Void горячиеКлавишиToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 helpRichTextBox->Clear();
			 LoadFromFile("FuncKeys.txt", helpRichTextBox);
		 }
};
}
