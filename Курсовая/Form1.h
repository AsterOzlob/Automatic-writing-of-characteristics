#pragma once

#include "UserHelp.h"

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
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  CharLabel;
	private: System::Windows::Forms::Label^  TargetLabel;
	protected: 

	protected: 

	private: System::Windows::Forms::Label^  GenderLabel;
	private: System::Windows::Forms::Panel^  GenderPanel;
	private: System::Windows::Forms::RadioButton^  ManRadioButton;
	private: System::Windows::Forms::RadioButton^  GirlRadioButton;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::CheckedListBox^  TraitCheckedListBox;

	private: System::Windows::Forms::Panel^  CharPanel;
	private: System::Windows::Forms::Panel^  PersonPanel;

	private: System::Windows::Forms::Label^  PersonLabel;
	private: System::Windows::Forms::Label^  TraitLabel;

	private: System::Windows::Forms::Label^  AgeLabel;

	private: System::Windows::Forms::TextBox^  SurnameTextBox;
	private: System::Windows::Forms::Label^  SurnameLabel;
	private: System::Windows::Forms::Panel^  TraitPanel;
	private: System::Windows::Forms::Label^  HabitsLabel;
	private: System::Windows::Forms::CheckedListBox^  HabitsCheckedListBox;

	private: System::Windows::Forms::Button^  savebutt1;
	private: System::Windows::Forms::Button^  savebutt2;
	private: System::Windows::Forms::Button^  savebutt3;
	private: System::Windows::Forms::CheckedListBox^  TraitCheckedListBox2;

	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::DateTimePicker^  DateTimePicker;

	private: System::Windows::Forms::Label^  hobbyLabel;

	private: System::Windows::Forms::ListBox^  LineListBox;
	private: System::Windows::Forms::CheckedListBox^  HobbyCheckedListBox;
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::MenuStrip^  charMenu;
	private: System::Windows::Forms::ToolStripMenuItem^  параметрыХарактеристикиToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  личныеДанныеToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^  patternMenu;
	private: System::Windows::Forms::ToolStripMenuItem^  личныеКачестваToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  файлToolStripMenuItem;

	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator;
	private: System::Windows::Forms::ToolStripMenuItem^  сохранитьКакToolStripMenuItem;

	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  печатьToolStripMenuItem;

private: System::Windows::Forms::RichTextBox^  patternBox;

private: System::Windows::Forms::FontDialog^  fontDialog1;
private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
private: System::Windows::Forms::PrintDialog^  printDialog1;

private: System::Windows::Forms::Panel^  AdditionalPanel;

private: System::Windows::Forms::TextBox^  levelTextBox;

private: System::Windows::Forms::Label^  levelLabel;

private: System::Windows::Forms::TextBox^  orgTextBox;
private: System::Windows::Forms::Label^  orgLabel;
private: System::Windows::Forms::Button^  savebutt4;

private: System::Windows::Forms::Label^  additionalLabel;
private: System::Windows::Forms::Label^  familyLabel;
private: System::Windows::Forms::TextBox^  familyTextBox;
private: System::Windows::Forms::TextBox^  healthTextBox;
private: System::Windows::Forms::Label^  healthLabel;
private: System::Windows::Forms::ToolStripMenuItem^  дополнительноToolStripMenuItem;

private: System::Windows::Forms::ToolStripMenuItem^  открытьToolStripMenuItem;
private: System::Windows::Forms::TextBox^  negTextBox;


private: System::Windows::Forms::TextBox^  posTextBox;

private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip;
private: System::Windows::Forms::ToolStripMenuItem^  добавитьЭлементToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  удалитьВыделенныеЭлементыToolStripMenuItem;
private: System::Windows::Forms::ToolStripTextBox^  newElemToolStripTextBox;
private: System::Windows::Forms::ToolStripMenuItem^  форматироватьToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  отменитьФорматированиеToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  шрифтToolStripMenu;
private: System::Windows::Forms::ToolTip^  rmcToolTip;
private: System::Windows::Forms::Button^  helpButt;

private: System::Windows::Forms::ToolStripMenuItem^  снятьВыделениеСЭлементовToolStripMenuItem;
private: System::Windows::Forms::Label^  label4;







private: System::ComponentModel::IContainer^  components;

	protected: 

	protected: 

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->CharLabel = (gcnew System::Windows::Forms::Label());
			this->TargetLabel = (gcnew System::Windows::Forms::Label());
			this->GenderLabel = (gcnew System::Windows::Forms::Label());
			this->GenderPanel = (gcnew System::Windows::Forms::Panel());
			this->ManRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->GirlRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TraitCheckedListBox = (gcnew System::Windows::Forms::CheckedListBox());
			this->contextMenuStrip = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->добавитьЭлементToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newElemToolStripTextBox = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->удалитьВыделенныеЭлементыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->снятьВыделениеСЭлементовToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->CharPanel = (gcnew System::Windows::Forms::Panel());
			this->helpButt = (gcnew System::Windows::Forms::Button());
			this->LineListBox = (gcnew System::Windows::Forms::ListBox());
			this->savebutt1 = (gcnew System::Windows::Forms::Button());
			this->PersonPanel = (gcnew System::Windows::Forms::Panel());
			this->DateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->savebutt2 = (gcnew System::Windows::Forms::Button());
			this->AgeLabel = (gcnew System::Windows::Forms::Label());
			this->SurnameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SurnameLabel = (gcnew System::Windows::Forms::Label());
			this->PersonLabel = (gcnew System::Windows::Forms::Label());
			this->TraitPanel = (gcnew System::Windows::Forms::Panel());
			this->HobbyCheckedListBox = (gcnew System::Windows::Forms::CheckedListBox());
			this->hobbyLabel = (gcnew System::Windows::Forms::Label());
			this->savebutt3 = (gcnew System::Windows::Forms::Button());
			this->TraitCheckedListBox2 = (gcnew System::Windows::Forms::CheckedListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->HabitsLabel = (gcnew System::Windows::Forms::Label());
			this->HabitsCheckedListBox = (gcnew System::Windows::Forms::CheckedListBox());
			this->TraitLabel = (gcnew System::Windows::Forms::Label());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->negTextBox = (gcnew System::Windows::Forms::TextBox());
			this->posTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->charMenu = (gcnew System::Windows::Forms::MenuStrip());
			this->параметрыХарактеристикиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->личныеДанныеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->личныеКачестваToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->дополнительноToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->patternBox = (gcnew System::Windows::Forms::RichTextBox());
			this->patternMenu = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->открытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->сохранитьКакToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->печатьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->форматироватьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->отменитьФорматированиеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->шрифтToolStripMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->AdditionalPanel = (gcnew System::Windows::Forms::Panel());
			this->healthTextBox = (gcnew System::Windows::Forms::TextBox());
			this->healthLabel = (gcnew System::Windows::Forms::Label());
			this->familyTextBox = (gcnew System::Windows::Forms::TextBox());
			this->familyLabel = (gcnew System::Windows::Forms::Label());
			this->levelTextBox = (gcnew System::Windows::Forms::TextBox());
			this->levelLabel = (gcnew System::Windows::Forms::Label());
			this->orgTextBox = (gcnew System::Windows::Forms::TextBox());
			this->orgLabel = (gcnew System::Windows::Forms::Label());
			this->savebutt4 = (gcnew System::Windows::Forms::Button());
			this->additionalLabel = (gcnew System::Windows::Forms::Label());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->rmcToolTip = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->GenderPanel->SuspendLayout();
			this->contextMenuStrip->SuspendLayout();
			this->CharPanel->SuspendLayout();
			this->PersonPanel->SuspendLayout();
			this->TraitPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->charMenu->SuspendLayout();
			this->patternMenu->SuspendLayout();
			this->AdditionalPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// CharLabel
			// 
			this->CharLabel->AutoSize = true;
			this->CharLabel->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->CharLabel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->CharLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->CharLabel->Location = System::Drawing::Point(43, 11);
			this->CharLabel->Name = L"CharLabel";
			this->CharLabel->Size = System::Drawing::Size(314, 22);
			this->CharLabel->TabIndex = 0;
			this->CharLabel->Text = L"Настройка параметров характеристики";
			// 
			// TargetLabel
			// 
			this->TargetLabel->AutoSize = true;
			this->TargetLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->TargetLabel->Location = System::Drawing::Point(3, 52);
			this->TargetLabel->Name = L"TargetLabel";
			this->TargetLabel->Size = System::Drawing::Size(134, 40);
			this->TargetLabel->TabIndex = 1;
			this->TargetLabel->Text = L"Направление\r\nхарактеристики:";
			// 
			// GenderLabel
			// 
			this->GenderLabel->AutoSize = true;
			this->GenderLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->GenderLabel->Location = System::Drawing::Point(3, 161);
			this->GenderLabel->Name = L"GenderLabel";
			this->GenderLabel->Size = System::Drawing::Size(121, 20);
			this->GenderLabel->TabIndex = 6;
			this->GenderLabel->Text = L"Выберите пол:";
			// 
			// GenderPanel
			// 
			this->GenderPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->GenderPanel->Controls->Add(this->ManRadioButton);
			this->GenderPanel->Controls->Add(this->GirlRadioButton);
			this->GenderPanel->Location = System::Drawing::Point(140, 162);
			this->GenderPanel->Name = L"GenderPanel";
			this->GenderPanel->Size = System::Drawing::Size(225, 28);
			this->GenderPanel->TabIndex = 9;
			// 
			// ManRadioButton
			// 
			this->ManRadioButton->AutoSize = true;
			this->ManRadioButton->Location = System::Drawing::Point(3, 3);
			this->ManRadioButton->Name = L"ManRadioButton";
			this->ManRadioButton->Size = System::Drawing::Size(71, 17);
			this->ManRadioButton->TabIndex = 7;
			this->ManRadioButton->Text = L"Мужской";
			this->ManRadioButton->UseVisualStyleBackColor = true;
			this->ManRadioButton->CheckedChanged += gcnew System::EventHandler(this, &Form1::ManRadioButton_CheckedChanged);
			// 
			// GirlRadioButton
			// 
			this->GirlRadioButton->AutoSize = true;
			this->GirlRadioButton->Location = System::Drawing::Point(131, 3);
			this->GirlRadioButton->Name = L"GirlRadioButton";
			this->GirlRadioButton->Size = System::Drawing::Size(72, 17);
			this->GirlRadioButton->TabIndex = 8;
			this->GirlRadioButton->Text = L"Женский";
			this->GirlRadioButton->UseVisualStyleBackColor = true;
			this->GirlRadioButton->CheckedChanged += gcnew System::EventHandler(this, &Form1::GirlRadioButton_CheckedChanged_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(3, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(144, 40);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Позитивные\r\nличные качества:";
			// 
			// TraitCheckedListBox
			// 
			this->TraitCheckedListBox->CheckOnClick = true;
			this->TraitCheckedListBox->ContextMenuStrip = this->contextMenuStrip;
			this->TraitCheckedListBox->FormattingEnabled = true;
			this->TraitCheckedListBox->Location = System::Drawing::Point(168, 43);
			this->TraitCheckedListBox->Name = L"TraitCheckedListBox";
			this->TraitCheckedListBox->ScrollAlwaysVisible = true;
			this->TraitCheckedListBox->Size = System::Drawing::Size(222, 79);
			this->TraitCheckedListBox->Sorted = true;
			this->TraitCheckedListBox->TabIndex = 11;
			this->rmcToolTip->SetToolTip(this->TraitCheckedListBox, L"Нажмите ПКМ для\r\nдополнительной настройки");
			this->TraitCheckedListBox->ItemCheck += gcnew System::Windows::Forms::ItemCheckEventHandler(this, &Form1::TraitCheckedListBox_ItemCheck);
			// 
			// contextMenuStrip
			// 
			this->contextMenuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->добавитьЭлементToolStripMenuItem, 
				this->удалитьВыделенныеЭлементыToolStripMenuItem, this->снятьВыделениеСЭлементовToolStripMenuItem});
			this->contextMenuStrip->Name = L"contextMenuStrip";
			this->contextMenuStrip->Size = System::Drawing::Size(249, 70);
			// 
			// добавитьЭлементToolStripMenuItem
			// 
			this->добавитьЭлементToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->newElemToolStripTextBox});
			this->добавитьЭлементToolStripMenuItem->Name = L"добавитьЭлементToolStripMenuItem";
			this->добавитьЭлементToolStripMenuItem->Size = System::Drawing::Size(248, 22);
			this->добавитьЭлементToolStripMenuItem->Text = L"Добавить элемент";
			this->добавитьЭлементToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::добавитьЭлементToolStripMenuItem_Click);
			// 
			// newElemToolStripTextBox
			// 
			this->newElemToolStripTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->newElemToolStripTextBox->MaxLength = 50;
			this->newElemToolStripTextBox->Name = L"newElemToolStripTextBox";
			this->newElemToolStripTextBox->Size = System::Drawing::Size(100, 29);
			this->newElemToolStripTextBox->ToolTipText = L"Нажмите Enter, чтобы добавить элемент\r\n";
			this->newElemToolStripTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::newElemToolStripTextBox_KeyPress);
			// 
			// удалитьВыделенныеЭлементыToolStripMenuItem
			// 
			this->удалитьВыделенныеЭлементыToolStripMenuItem->Name = L"удалитьВыделенныеЭлементыToolStripMenuItem";
			this->удалитьВыделенныеЭлементыToolStripMenuItem->Size = System::Drawing::Size(248, 22);
			this->удалитьВыделенныеЭлементыToolStripMenuItem->Text = L"Удалить выделенные элементы";
			this->удалитьВыделенныеЭлементыToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::удалитьВыделенныеЭлементыToolStripMenuItem_Click);
			// 
			// снятьВыделениеСЭлементовToolStripMenuItem
			// 
			this->снятьВыделениеСЭлементовToolStripMenuItem->Name = L"снятьВыделениеСЭлементовToolStripMenuItem";
			this->снятьВыделениеСЭлементовToolStripMenuItem->Size = System::Drawing::Size(248, 22);
			this->снятьВыделениеСЭлементовToolStripMenuItem->Text = L"Снять выделение с элементов";
			this->снятьВыделениеСЭлементовToolStripMenuItem->ToolTipText = L"Снимает галочки с элементов";
			this->снятьВыделениеСЭлементовToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::снятьВыделениеСЭлементовToolStripMenuItem_Click);
			// 
			// CharPanel
			// 
			this->CharPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->CharPanel->Controls->Add(this->helpButt);
			this->CharPanel->Controls->Add(this->LineListBox);
			this->CharPanel->Controls->Add(this->savebutt1);
			this->CharPanel->Controls->Add(this->CharLabel);
			this->CharPanel->Controls->Add(this->TargetLabel);
			this->CharPanel->Location = System::Drawing::Point(11, 27);
			this->CharPanel->Name = L"CharPanel";
			this->CharPanel->Size = System::Drawing::Size(401, 275);
			this->CharPanel->TabIndex = 15;
			// 
			// helpButt
			// 
			this->helpButt->Location = System::Drawing::Point(231, 229);
			this->helpButt->Name = L"helpButt";
			this->helpButt->Size = System::Drawing::Size(151, 41);
			this->helpButt->TabIndex = 20;
			this->helpButt->Text = L"Справка";
			this->helpButt->UseVisualStyleBackColor = true;
			this->helpButt->Click += gcnew System::EventHandler(this, &Form1::helpButt_Click);
			// 
			// LineListBox
			// 
			this->LineListBox->FormattingEnabled = true;
			this->LineListBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Среднее учебное заведение", L"Из высшего учебного заведения", 
				L"Военный комиссариат", L"Пользовательский шаблон"});
			this->LineListBox->Location = System::Drawing::Point(143, 52);
			this->LineListBox->Name = L"LineListBox";
			this->LineListBox->ScrollAlwaysVisible = true;
			this->LineListBox->Size = System::Drawing::Size(231, 56);
			this->LineListBox->TabIndex = 19;
			this->LineListBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::LineListBox_SelectedIndexChanged);
			// 
			// savebutt1
			// 
			this->savebutt1->Enabled = false;
			this->savebutt1->Location = System::Drawing::Point(18, 229);
			this->savebutt1->Name = L"savebutt1";
			this->savebutt1->Size = System::Drawing::Size(151, 41);
			this->savebutt1->TabIndex = 15;
			this->savebutt1->Text = L"Сохранить данные";
			this->savebutt1->UseVisualStyleBackColor = true;
			this->savebutt1->Click += gcnew System::EventHandler(this, &Form1::savebutt1_Click);
			// 
			// PersonPanel
			// 
			this->PersonPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PersonPanel->Controls->Add(this->DateTimePicker);
			this->PersonPanel->Controls->Add(this->savebutt2);
			this->PersonPanel->Controls->Add(this->AgeLabel);
			this->PersonPanel->Controls->Add(this->SurnameTextBox);
			this->PersonPanel->Controls->Add(this->SurnameLabel);
			this->PersonPanel->Controls->Add(this->PersonLabel);
			this->PersonPanel->Controls->Add(this->GenderLabel);
			this->PersonPanel->Controls->Add(this->GenderPanel);
			this->PersonPanel->Location = System::Drawing::Point(11, 308);
			this->PersonPanel->Name = L"PersonPanel";
			this->PersonPanel->Size = System::Drawing::Size(401, 275);
			this->PersonPanel->TabIndex = 16;
			this->PersonPanel->Visible = false;
			// 
			// DateTimePicker
			// 
			this->DateTimePicker->Checked = false;
			this->DateTimePicker->CustomFormat = L"dd.MM.yyyy";
			this->DateTimePicker->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->DateTimePicker->Location = System::Drawing::Point(140, 105);
			this->DateTimePicker->MaxDate = System::DateTime(2022, 12, 31, 0, 0, 0, 0);
			this->DateTimePicker->MinDate = System::DateTime(1950, 1, 1, 0, 0, 0, 0);
			this->DateTimePicker->Name = L"DateTimePicker";
			this->DateTimePicker->ShowCheckBox = true;
			this->DateTimePicker->Size = System::Drawing::Size(227, 20);
			this->DateTimePicker->TabIndex = 15;
			this->DateTimePicker->Value = System::DateTime(1990, 1, 31, 0, 0, 0, 0);
			this->DateTimePicker->ValueChanged += gcnew System::EventHandler(this, &Form1::DateTimePicker_ValueChanged);
			// 
			// savebutt2
			// 
			this->savebutt2->Enabled = false;
			this->savebutt2->Location = System::Drawing::Point(119, 229);
			this->savebutt2->Name = L"savebutt2";
			this->savebutt2->Size = System::Drawing::Size(151, 41);
			this->savebutt2->TabIndex = 14;
			this->savebutt2->Text = L"Сохранить данные";
			this->savebutt2->UseVisualStyleBackColor = true;
			this->savebutt2->Click += gcnew System::EventHandler(this, &Form1::savebutt2_Click);
			// 
			// AgeLabel
			// 
			this->AgeLabel->AutoSize = true;
			this->AgeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->AgeLabel->Location = System::Drawing::Point(3, 104);
			this->AgeLabel->Name = L"AgeLabel";
			this->AgeLabel->Size = System::Drawing::Size(132, 20);
			this->AgeLabel->TabIndex = 12;
			this->AgeLabel->Text = L"Дата рождения:";
			// 
			// SurnameTextBox
			// 
			this->SurnameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->SurnameTextBox->Location = System::Drawing::Point(140, 47);
			this->SurnameTextBox->Name = L"SurnameTextBox";
			this->SurnameTextBox->Size = System::Drawing::Size(226, 23);
			this->SurnameTextBox->TabIndex = 11;
			this->SurnameTextBox->TextChanged += gcnew System::EventHandler(this, &Form1::SurnameTextBox_TextChanged);
			this->SurnameTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::SurnameTextBox_KeyPress);
			// 
			// SurnameLabel
			// 
			this->SurnameLabel->AutoSize = true;
			this->SurnameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->SurnameLabel->Location = System::Drawing::Point(3, 50);
			this->SurnameLabel->Name = L"SurnameLabel";
			this->SurnameLabel->Size = System::Drawing::Size(122, 20);
			this->SurnameLabel->TabIndex = 10;
			this->SurnameLabel->Text = L"Введите ФИО:";
			// 
			// PersonLabel
			// 
			this->PersonLabel->AutoSize = true;
			this->PersonLabel->BackColor = System::Drawing::SystemColors::Window;
			this->PersonLabel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->PersonLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->PersonLabel->Location = System::Drawing::Point(90, 10);
			this->PersonLabel->Name = L"PersonLabel";
			this->PersonLabel->Size = System::Drawing::Size(223, 22);
			this->PersonLabel->TabIndex = 0;
			this->PersonLabel->Text = L"Заполнение личных данных";
			// 
			// TraitPanel
			// 
			this->TraitPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TraitPanel->Controls->Add(this->HobbyCheckedListBox);
			this->TraitPanel->Controls->Add(this->hobbyLabel);
			this->TraitPanel->Controls->Add(this->savebutt3);
			this->TraitPanel->Controls->Add(this->TraitCheckedListBox2);
			this->TraitPanel->Controls->Add(this->label1);
			this->TraitPanel->Controls->Add(this->HabitsLabel);
			this->TraitPanel->Controls->Add(this->HabitsCheckedListBox);
			this->TraitPanel->Controls->Add(this->TraitLabel);
			this->TraitPanel->Controls->Add(this->label2);
			this->TraitPanel->Controls->Add(this->TraitCheckedListBox);
			this->TraitPanel->Location = System::Drawing::Point(432, 532);
			this->TraitPanel->Name = L"TraitPanel";
			this->TraitPanel->Size = System::Drawing::Size(400, 443);
			this->TraitPanel->TabIndex = 18;
			this->TraitPanel->Visible = false;
			// 
			// HobbyCheckedListBox
			// 
			this->HobbyCheckedListBox->CheckOnClick = true;
			this->HobbyCheckedListBox->ContextMenuStrip = this->contextMenuStrip;
			this->HobbyCheckedListBox->FormattingEnabled = true;
			this->HobbyCheckedListBox->Location = System::Drawing::Point(168, 298);
			this->HobbyCheckedListBox->Name = L"HobbyCheckedListBox";
			this->HobbyCheckedListBox->ScrollAlwaysVisible = true;
			this->HobbyCheckedListBox->Size = System::Drawing::Size(222, 79);
			this->HobbyCheckedListBox->Sorted = true;
			this->HobbyCheckedListBox->TabIndex = 24;
			this->rmcToolTip->SetToolTip(this->HobbyCheckedListBox, L"Нажмите ПКМ для\r\nдополнительной настройки\r\n");
			this->HobbyCheckedListBox->ItemCheck += gcnew System::Windows::Forms::ItemCheckEventHandler(this, &Form1::HobbyCheckedListBox_ItemCheck);
			// 
			// hobbyLabel
			// 
			this->hobbyLabel->AutoSize = true;
			this->hobbyLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->hobbyLabel->Location = System::Drawing::Point(5, 306);
			this->hobbyLabel->Name = L"hobbyLabel";
			this->hobbyLabel->Size = System::Drawing::Size(96, 20);
			this->hobbyLabel->TabIndex = 23;
			this->hobbyLabel->Text = L"Увлечения:";
			// 
			// savebutt3
			// 
			this->savebutt3->Enabled = false;
			this->savebutt3->Location = System::Drawing::Point(119, 397);
			this->savebutt3->Name = L"savebutt3";
			this->savebutt3->Size = System::Drawing::Size(151, 41);
			this->savebutt3->TabIndex = 22;
			this->savebutt3->Text = L"Сохранить данные";
			this->savebutt3->UseVisualStyleBackColor = true;
			this->savebutt3->Click += gcnew System::EventHandler(this, &Form1::savebutt3_Click);
			// 
			// TraitCheckedListBox2
			// 
			this->TraitCheckedListBox2->CheckOnClick = true;
			this->TraitCheckedListBox2->ContextMenuStrip = this->contextMenuStrip;
			this->TraitCheckedListBox2->FormattingEnabled = true;
			this->TraitCheckedListBox2->Location = System::Drawing::Point(168, 128);
			this->TraitCheckedListBox2->Name = L"TraitCheckedListBox2";
			this->TraitCheckedListBox2->ScrollAlwaysVisible = true;
			this->TraitCheckedListBox2->Size = System::Drawing::Size(222, 79);
			this->TraitCheckedListBox2->Sorted = true;
			this->TraitCheckedListBox2->TabIndex = 19;
			this->rmcToolTip->SetToolTip(this->TraitCheckedListBox2, L"Нажмите ПКМ для\r\nдополнительной настройки\r\n");
			this->TraitCheckedListBox2->ItemCheck += gcnew System::Windows::Forms::ItemCheckEventHandler(this, &Form1::TraitCheckedListBox2_ItemCheck);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(3, 128);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(144, 40);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Негативные\r\nличные качества:";
			// 
			// HabitsLabel
			// 
			this->HabitsLabel->AutoSize = true;
			this->HabitsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->HabitsLabel->Location = System::Drawing::Point(3, 215);
			this->HabitsLabel->Name = L"HabitsLabel";
			this->HabitsLabel->Size = System::Drawing::Size(159, 20);
			this->HabitsLabel->TabIndex = 18;
			this->HabitsLabel->Text = L"Вредные привычки:";
			// 
			// HabitsCheckedListBox
			// 
			this->HabitsCheckedListBox->CheckOnClick = true;
			this->HabitsCheckedListBox->ContextMenuStrip = this->contextMenuStrip;
			this->HabitsCheckedListBox->FormattingEnabled = true;
			this->HabitsCheckedListBox->Location = System::Drawing::Point(168, 213);
			this->HabitsCheckedListBox->Name = L"HabitsCheckedListBox";
			this->HabitsCheckedListBox->ScrollAlwaysVisible = true;
			this->HabitsCheckedListBox->Size = System::Drawing::Size(222, 79);
			this->HabitsCheckedListBox->Sorted = true;
			this->HabitsCheckedListBox->TabIndex = 21;
			this->rmcToolTip->SetToolTip(this->HabitsCheckedListBox, L"Нажмите ПКМ для\r\nдополнительной настройки\r\n");
			this->HabitsCheckedListBox->ItemCheck += gcnew System::Windows::Forms::ItemCheckEventHandler(this, &Form1::HabitsCheckedListBox_ItemCheck);
			// 
			// TraitLabel
			// 
			this->TraitLabel->AutoSize = true;
			this->TraitLabel->BackColor = System::Drawing::SystemColors::Window;
			this->TraitLabel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->TraitLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->TraitLabel->Location = System::Drawing::Point(91, 10);
			this->TraitLabel->Name = L"TraitLabel";
			this->TraitLabel->Size = System::Drawing::Size(228, 22);
			this->TraitLabel->TabIndex = 17;
			this->TraitLabel->Text = L"Заполнение личных качеств";
			// 
			// splitContainer1
			// 
			this->splitContainer1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->splitContainer1->IsSplitterFixed = true;
			this->splitContainer1->Location = System::Drawing::Point(0, 1);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->BackColor = System::Drawing::SystemColors::Control;
			this->splitContainer1->Panel1->Controls->Add(this->PersonPanel);
			this->splitContainer1->Panel1->Controls->Add(this->CharPanel);
			this->splitContainer1->Panel1->Controls->Add(this->label4);
			this->splitContainer1->Panel1->Controls->Add(this->negTextBox);
			this->splitContainer1->Panel1->Controls->Add(this->posTextBox);
			this->splitContainer1->Panel1->Controls->Add(this->label3);
			this->splitContainer1->Panel1->Controls->Add(this->charMenu);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->patternBox);
			this->splitContainer1->Panel2->Controls->Add(this->patternMenu);
			this->splitContainer1->Size = System::Drawing::Size(854, 525);
			this->splitContainer1->SplitterDistance = 427;
			this->splitContainer1->TabIndex = 19;
			this->splitContainer1->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(213, 476);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(145, 20);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Негативность (%)";
			// 
			// negTextBox
			// 
			this->negTextBox->Enabled = false;
			this->negTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->negTextBox->Location = System::Drawing::Point(364, 476);
			this->negTextBox->Name = L"negTextBox";
			this->negTextBox->Size = System::Drawing::Size(38, 24);
			this->negTextBox->TabIndex = 23;
			this->negTextBox->Text = L"0";
			// 
			// posTextBox
			// 
			this->posTextBox->Enabled = false;
			this->posTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->posTextBox->Location = System::Drawing::Point(155, 476);
			this->posTextBox->Name = L"posTextBox";
			this->posTextBox->Size = System::Drawing::Size(38, 24);
			this->posTextBox->TabIndex = 21;
			this->posTextBox->Text = L"0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(3, 476);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(146, 20);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Позитивность (%)";
			// 
			// charMenu
			// 
			this->charMenu->BackColor = System::Drawing::Color::White;
			this->charMenu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->параметрыХарактеристикиToolStripMenuItem, 
				this->личныеДанныеToolStripMenuItem, this->личныеКачестваToolStripMenuItem, this->дополнительноToolStripMenuItem});
			this->charMenu->Location = System::Drawing::Point(0, 0);
			this->charMenu->Name = L"charMenu";
			this->charMenu->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			this->charMenu->Size = System::Drawing::Size(425, 24);
			this->charMenu->TabIndex = 19;
			this->charMenu->Text = L"menuStrip2";
			// 
			// параметрыХарактеристикиToolStripMenuItem
			// 
			this->параметрыХарактеристикиToolStripMenuItem->Checked = true;
			this->параметрыХарактеристикиToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->параметрыХарактеристикиToolStripMenuItem->Name = L"параметрыХарактеристикиToolStripMenuItem";
			this->параметрыХарактеристикиToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::D1));
			this->параметрыХарактеристикиToolStripMenuItem->Size = System::Drawing::Size(106, 20);
			this->параметрыХарактеристикиToolStripMenuItem->Text = L"Характеристика";
			this->параметрыХарактеристикиToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::параметрыХарактеристикиToolStripMenuItem_Click_1);
			// 
			// личныеДанныеToolStripMenuItem
			// 
			this->личныеДанныеToolStripMenuItem->Name = L"личныеДанныеToolStripMenuItem";
			this->личныеДанныеToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::D2));
			this->личныеДанныеToolStripMenuItem->Size = System::Drawing::Size(107, 20);
			this->личныеДанныеToolStripMenuItem->Text = L"Личные данные";
			this->личныеДанныеToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::личныеДанныеToolStripMenuItem_Click);
			// 
			// личныеКачестваToolStripMenuItem
			// 
			this->личныеКачестваToolStripMenuItem->Name = L"личныеКачестваToolStripMenuItem";
			this->личныеКачестваToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::D3));
			this->личныеКачестваToolStripMenuItem->Size = System::Drawing::Size(68, 20);
			this->личныеКачестваToolStripMenuItem->Text = L"Качества";
			this->личныеКачестваToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::личныеКачестваToolStripMenuItem_Click);
			// 
			// дополнительноToolStripMenuItem
			// 
			this->дополнительноToolStripMenuItem->Name = L"дополнительноToolStripMenuItem";
			this->дополнительноToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::D4));
			this->дополнительноToolStripMenuItem->Size = System::Drawing::Size(107, 20);
			this->дополнительноToolStripMenuItem->Text = L"Дополнительно";
			this->дополнительноToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::дополнительноToolStripMenuItem_Click);
			// 
			// patternBox
			// 
			this->patternBox->AcceptsTab = true;
			this->patternBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->patternBox->AutoWordSelection = true;
			this->patternBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->patternBox->Location = System::Drawing::Point(0, 21);
			this->patternBox->Name = L"patternBox";
			this->patternBox->Size = System::Drawing::Size(421, 503);
			this->patternBox->TabIndex = 1;
			this->patternBox->TabStop = false;
			this->patternBox->Text = L"";
			// 
			// patternMenu
			// 
			this->patternMenu->BackColor = System::Drawing::Color::White;
			this->patternMenu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->файлToolStripMenuItem, 
				this->форматироватьToolStripMenuItem, this->отменитьФорматированиеToolStripMenuItem, this->шрифтToolStripMenu});
			this->patternMenu->Location = System::Drawing::Point(0, 0);
			this->patternMenu->Name = L"patternMenu";
			this->patternMenu->Size = System::Drawing::Size(421, 24);
			this->patternMenu->TabIndex = 0;
			this->patternMenu->Text = L"menuStrip3";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->открытьToolStripMenuItem, 
				this->toolStripSeparator, this->сохранитьКакToolStripMenuItem, this->toolStripSeparator1, this->печатьToolStripMenuItem});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->файлToolStripMenuItem->Text = L"&Файл";
			// 
			// открытьToolStripMenuItem
			// 
			this->открытьToolStripMenuItem->Enabled = false;
			this->открытьToolStripMenuItem->Name = L"открытьToolStripMenuItem";
			this->открытьToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->открытьToolStripMenuItem->Size = System::Drawing::Size(194, 22);
			this->открытьToolStripMenuItem->Text = L"Открыть";
			this->открытьToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::открытьToolStripMenuItem_Click_1);
			// 
			// toolStripSeparator
			// 
			this->toolStripSeparator->Name = L"toolStripSeparator";
			this->toolStripSeparator->Size = System::Drawing::Size(191, 6);
			// 
			// сохранитьКакToolStripMenuItem
			// 
			this->сохранитьКакToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"сохранитьКакToolStripMenuItem.Image")));
			this->сохранитьКакToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->сохранитьКакToolStripMenuItem->Name = L"сохранитьКакToolStripMenuItem";
			this->сохранитьКакToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->сохранитьКакToolStripMenuItem->Size = System::Drawing::Size(194, 22);
			this->сохранитьКакToolStripMenuItem->Text = L"&Сохранить как";
			this->сохранитьКакToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::сохранитьКакToolStripMenuItem_Click_1);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(191, 6);
			// 
			// печатьToolStripMenuItem
			// 
			this->печатьToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"печатьToolStripMenuItem.Image")));
			this->печатьToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->печатьToolStripMenuItem->Name = L"печатьToolStripMenuItem";
			this->печатьToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::P));
			this->печатьToolStripMenuItem->Size = System::Drawing::Size(194, 22);
			this->печатьToolStripMenuItem->Text = L"&Печать";
			this->печатьToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::печатьToolStripMenuItem_Click);
			// 
			// форматироватьToolStripMenuItem
			// 
			this->форматироватьToolStripMenuItem->Enabled = false;
			this->форматироватьToolStripMenuItem->Name = L"форматироватьToolStripMenuItem";
			this->форматироватьToolStripMenuItem->ShortcutKeyDisplayString = L"";
			this->форматироватьToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::F));
			this->форматироватьToolStripMenuItem->Size = System::Drawing::Size(106, 20);
			this->форматироватьToolStripMenuItem->Text = L"Форматировать";
			this->форматироватьToolStripMenuItem->ToolTipText = L"Если форматирование не происходит,\r\nзначит вы используете функцию,\r\nданные для ко" 
				L"торой не сохранили";
			this->форматироватьToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::форматироватьToolStripMenuItem_Click_1);
			// 
			// отменитьФорматированиеToolStripMenuItem
			// 
			this->отменитьФорматированиеToolStripMenuItem->Enabled = false;
			this->отменитьФорматированиеToolStripMenuItem->Name = L"отменитьФорматированиеToolStripMenuItem";
			this->отменитьФорматированиеToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
			this->отменитьФорматированиеToolStripMenuItem->Size = System::Drawing::Size(172, 20);
			this->отменитьФорматированиеToolStripMenuItem->Text = L"Отменить форматирование";
			this->отменитьФорматированиеToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::отменитьФорматированиеToolStripMenuItem_Click_1);
			// 
			// шрифтToolStripMenu
			// 
			this->шрифтToolStripMenu->Name = L"шрифтToolStripMenu";
			this->шрифтToolStripMenu->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::T));
			this->шрифтToolStripMenu->Size = System::Drawing::Size(58, 20);
			this->шрифтToolStripMenu->Text = L"Шрифт";
			this->шрифтToolStripMenu->Click += gcnew System::EventHandler(this, &Form1::шрифтToolStripMenu_Click);
			// 
			// AdditionalPanel
			// 
			this->AdditionalPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->AdditionalPanel->Controls->Add(this->healthTextBox);
			this->AdditionalPanel->Controls->Add(this->healthLabel);
			this->AdditionalPanel->Controls->Add(this->familyTextBox);
			this->AdditionalPanel->Controls->Add(this->familyLabel);
			this->AdditionalPanel->Controls->Add(this->levelTextBox);
			this->AdditionalPanel->Controls->Add(this->levelLabel);
			this->AdditionalPanel->Controls->Add(this->orgTextBox);
			this->AdditionalPanel->Controls->Add(this->orgLabel);
			this->AdditionalPanel->Controls->Add(this->savebutt4);
			this->AdditionalPanel->Controls->Add(this->additionalLabel);
			this->AdditionalPanel->Location = System::Drawing::Point(8, 532);
			this->AdditionalPanel->Name = L"AdditionalPanel";
			this->AdditionalPanel->Size = System::Drawing::Size(401, 275);
			this->AdditionalPanel->TabIndex = 20;
			this->AdditionalPanel->Visible = false;
			// 
			// healthTextBox
			// 
			this->healthTextBox->Location = System::Drawing::Point(188, 184);
			this->healthTextBox->Name = L"healthTextBox";
			this->healthTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->healthTextBox->Size = System::Drawing::Size(196, 20);
			this->healthTextBox->TabIndex = 24;
			this->healthTextBox->TextChanged += gcnew System::EventHandler(this, &Form1::healthTextBox_TextChanged);
			this->healthTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::healthTextBox_KeyPress);
			// 
			// healthLabel
			// 
			this->healthLabel->AutoSize = true;
			this->healthLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->healthLabel->Location = System::Drawing::Point(5, 182);
			this->healthLabel->Name = L"healthLabel";
			this->healthLabel->Size = System::Drawing::Size(154, 20);
			this->healthLabel->TabIndex = 23;
			this->healthLabel->Text = L"Уровень здоровья:";
			// 
			// familyTextBox
			// 
			this->familyTextBox->Location = System::Drawing::Point(188, 142);
			this->familyTextBox->Name = L"familyTextBox";
			this->familyTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->familyTextBox->Size = System::Drawing::Size(196, 20);
			this->familyTextBox->TabIndex = 22;
			this->familyTextBox->TextChanged += gcnew System::EventHandler(this, &Form1::familyTextBox_TextChanged);
			this->familyTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::familyTextBox_KeyPress);
			// 
			// familyLabel
			// 
			this->familyLabel->AutoSize = true;
			this->familyLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->familyLabel->Location = System::Drawing::Point(5, 142);
			this->familyLabel->Name = L"familyLabel";
			this->familyLabel->Size = System::Drawing::Size(177, 20);
			this->familyLabel->TabIndex = 21;
			this->familyLabel->Text = L"Семейное положение:";
			// 
			// levelTextBox
			// 
			this->levelTextBox->Location = System::Drawing::Point(188, 101);
			this->levelTextBox->Name = L"levelTextBox";
			this->levelTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->levelTextBox->Size = System::Drawing::Size(196, 20);
			this->levelTextBox->TabIndex = 20;
			this->levelTextBox->TextChanged += gcnew System::EventHandler(this, &Form1::levelTextBox_TextChanged);
			this->levelTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::levelTextBox_KeyPress);
			// 
			// levelLabel
			// 
			this->levelLabel->AutoSize = true;
			this->levelLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->levelLabel->Location = System::Drawing::Point(3, 99);
			this->levelLabel->Name = L"levelLabel";
			this->levelLabel->Size = System::Drawing::Size(179, 20);
			this->levelLabel->TabIndex = 19;
			this->levelLabel->Text = L"Уровень образования:";
			// 
			// orgTextBox
			// 
			this->orgTextBox->Location = System::Drawing::Point(225, 54);
			this->orgTextBox->Name = L"orgTextBox";
			this->orgTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->orgTextBox->Size = System::Drawing::Size(159, 20);
			this->orgTextBox->TabIndex = 18;
			this->orgTextBox->TextChanged += gcnew System::EventHandler(this, &Form1::orgTextBox_TextChanged);
			this->orgTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::orgTextBox_KeyPress);
			// 
			// orgLabel
			// 
			this->orgLabel->AutoSize = true;
			this->orgLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->orgLabel->Location = System::Drawing::Point(3, 52);
			this->orgLabel->Name = L"orgLabel";
			this->orgLabel->Size = System::Drawing::Size(226, 20);
			this->orgLabel->TabIndex = 17;
			this->orgLabel->Text = L"Наименование организации:";
			// 
			// savebutt4
			// 
			this->savebutt4->Enabled = false;
			this->savebutt4->Location = System::Drawing::Point(119, 229);
			this->savebutt4->Name = L"savebutt4";
			this->savebutt4->Size = System::Drawing::Size(151, 41);
			this->savebutt4->TabIndex = 15;
			this->savebutt4->Text = L"Сохранить данные";
			this->savebutt4->UseVisualStyleBackColor = true;
			this->savebutt4->Click += gcnew System::EventHandler(this, &Form1::savebutt4_Click);
			// 
			// additionalLabel
			// 
			this->additionalLabel->AutoSize = true;
			this->additionalLabel->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->additionalLabel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->additionalLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->additionalLabel->Location = System::Drawing::Point(99, 9);
			this->additionalLabel->Name = L"additionalLabel";
			this->additionalLabel->Size = System::Drawing::Size(206, 22);
			this->additionalLabel->TabIndex = 0;
			this->additionalLabel->Text = L"Дополнительные данные";
			// 
			// fontDialog1
			// 
			this->fontDialog1->ShowApply = true;
			this->fontDialog1->Apply += gcnew System::EventHandler(this, &Form1::fontDialog1_Apply);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->DefaultExt = L"txt";
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"Text Files (*.txt)|*.txt";
			this->openFileDialog1->Title = L"Открыть файл";
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->DefaultExt = L"txt";
			this->saveFileDialog1->Filter = L"Text Files (*.txt)|*.txt";
			this->saveFileDialog1->Title = L"Сохранить как";
			// 
			// printDialog1
			// 
			this->printDialog1->AllowSomePages = true;
			this->printDialog1->UseEXDialog = true;
			// 
			// rmcToolTip
			// 
			this->rmcToolTip->AutoPopDelay = 5000;
			this->rmcToolTip->InitialDelay = 700;
			this->rmcToolTip->ReshowDelay = 100;
			this->rmcToolTip->ToolTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			this->rmcToolTip->ToolTipTitle = L"Дополнительно";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(1512, 597);
			this->Controls->Add(this->TraitPanel);
			this->Controls->Add(this->AdditionalPanel);
			this->Controls->Add(this->splitContainer1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimumSize = System::Drawing::Size(869, 564);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Автоматическое написание характеристик";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->HelpRequested += gcnew System::Windows::Forms::HelpEventHandler(this, &Form1::Form1_HelpRequested);
			this->GenderPanel->ResumeLayout(false);
			this->GenderPanel->PerformLayout();
			this->contextMenuStrip->ResumeLayout(false);
			this->CharPanel->ResumeLayout(false);
			this->CharPanel->PerformLayout();
			this->PersonPanel->ResumeLayout(false);
			this->PersonPanel->PerformLayout();
			this->TraitPanel->ResumeLayout(false);
			this->TraitPanel->PerformLayout();
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->charMenu->ResumeLayout(false);
			this->charMenu->PerformLayout();
			this->patternMenu->ResumeLayout(false);
			this->patternMenu->PerformLayout();
			this->AdditionalPanel->ResumeLayout(false);
			this->AdditionalPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
//Обьявление функций
private:
	//Функция перезаписи данных в файле
	//Аргументы: имя файла, текстовое поле с записываемыми данными
	void SaveToFile(String^ file, RichTextBox^ data)
	{
		//Объект для записи данных в файл
		StreamWriter^ sw = gcnew StreamWriter(file, false);
		sw->WriteLine(data->Text);
		sw->Close();
	}
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
	//Функция заполнения всех CheckedListBox
	//Аргументы: название файла, из которого происходит заполнение, название заполняемого CheckedListBox
	void LoadToCheckedListBox(String^ file, CheckedListBox^ list)
	{
		list->Items->Clear();
		//Объект для чтения из файла
		StreamReader^ sr = gcnew StreamReader(file);
		String^ line; //Считывающая строка
		while((line = sr->ReadLine()) != nullptr)
			list->Items->Add(line); //Добавление элементов
		sr->Close();
	}
	//Функция расчёта позитивности и негативности характеристики
	void CalcMood()
	{
		if(posMood != 0 || negMood != 0) {
			int allItems = posMood + negMood; //Количество выбранных качеств
			posTextBox->Text = Convert::ToString(posMood * 100 / allItems);
			negTextBox->Text = Convert::ToString(negMood * 100 / allItems);
		}
		else {
			posTextBox->Text = "0";
			negTextBox->Text = "0";
		}
	}
	//Функция добавления элементов в CheckedListBox и в файл этого CheckedListBox
	//Аргументы: CheckedListBox, название файла этого CheckedListBox
	void AddToCheckedListBox(CheckedListBox^ CheckedListBox, String^ file)
	{
		//Объект для дозаписи в файл
		StreamWriter^ sw = gcnew StreamWriter(file, true);
		String^ newItem = newElemToolStripTextBox->Text;
		if(newItem->Length >= 4) {
			CheckedListBox->Items->Add(newItem); //Добавление в CheckedListBox
			sw->WriteLine(newItem); //Добавление в файл
			newElemToolStripTextBox->Clear();
		}
		else
			MessageBox::Show("Недопустимая длина элемента, сохранение невозможно.",
			"Оповещение об ошибке", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		sw->Close();
	}
	//Фукнция удаления элементов из CheckedListBox и из файла этого CheckedListBox
	//Аргументы: CheckedListBox, название файла этого CheckedListBox,
	//удаление из позитивного или негативного поля
	void DeleteFromCheckedListBox(CheckedListBox^ CheckedListBox, String^ file, bool isPos)
	{
		//Объект для перезаписи файла
		StreamWriter^ sw = gcnew StreamWriter(file, false);
		for(int i = CheckedListBox->Items->Count - 1; i >= 0; i--) {
			if(CheckedListBox->GetItemChecked(i)) { //Если элемент выбран
				CheckedListBox->Items->RemoveAt(i); //Удаляем его
				if(isPos) posMood -= 1;
				else negMood -= 1;
				
			}
			else //В противном случае сохраняем в файл
				sw->WriteLine(CheckedListBox->Items[i]->ToString());
		}
		sw->Close();
		CalcMood(); //Пересчёт с учётом удалённых элементов
	}

//Обьявление переменных
private:
	static unsigned short int posMood = 0; //Позитивность
	static unsigned short int negMood = 0; //Негативность
	String^ surname; //ФИО характеризуемого
	String^ age; //Дата рождения
	String^ positiveTrait; //Позитивные качества
	String^ negativeTrait; //Негативные качества
	String^ badHabbits; //Плохие привычки
	String^ hobby; //Увлечения
	String^ organisation; //Организация (доп)
	String^ level; //Уровень образования (доп)
	String^ family; //Семейное положение (доп)
	String^ health; //Уровень здоровья (доп)

		//Обработка событий формы
//Открытие формы
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 this->Size = Drawing::Size(869, 564);
			 LoadToCheckedListBox("PositiveTrait.txt", TraitCheckedListBox);
			 LoadToCheckedListBox("NegativeTrait.txt", TraitCheckedListBox2);
			 LoadToCheckedListBox("BadHabbits.txt", HabitsCheckedListBox);
			 LoadToCheckedListBox("Hobby.txt", HobbyCheckedListBox);
		 }
//Закрытие формы
private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 //При форматировании шаблона во временный файл сохраняется
			 //содержимое patternBox, при закрытии программы удаляем этот файл
			 if(File::Exists("patternBox.txt"))
				 File::Delete("patternBox.txt");
		 }
//Открытие справки
private: System::Void Form1_HelpRequested(System::Object^  sender, System::Windows::Forms::HelpEventArgs^  hlpevent) {
			 UserHelp^ HelpForm = gcnew UserHelp();
			 HelpForm->Show();
		 }

		//Обработка компонентов меню
private: System::Void параметрыХарактеристикиToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 CharPanel->Visible = true;
			 PersonPanel->Visible = false;
			 TraitPanel->Visible = false;
			 AdditionalPanel->Visible = false;
		 }
private: System::Void личныеДанныеToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 CharPanel->Visible = false;
			 PersonPanel->Visible = true;
			 PersonPanel->Location = CharPanel->Location;
			 TraitPanel->Visible = false;
			 AdditionalPanel->Visible = false;
		 }
private: System::Void личныеКачестваToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 CharPanel->Visible = false;
			 PersonPanel->Visible = false;
			 TraitPanel->Visible = true;
			 TraitPanel->Location = CharPanel->Location;
			 AdditionalPanel->Visible = false;
		 }
private: System::Void дополнительноToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 CharPanel->Visible = false;
			 PersonPanel->Visible = false;
			 TraitPanel->Visible = false;
			 AdditionalPanel->Visible = true;
			 AdditionalPanel->Location = CharPanel->Location;
		 }

		 //Обработка панели настройки параметров характеристики
//Если выбраны все данные
private: System::Void LineListBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			savebutt1->Enabled = true;
		 }
//Сохранение данных
private: System::Void savebutt1_Click(System::Object^  sender, System::EventArgs^  e) {
			 patternBox->Clear(); //Очистка текстового поля
			 //Загрузка шаблона
			 switch(LineListBox->SelectedIndex)
			 {
			 case 0: //Среднее учебное заведение
				 LoadFromFile("School.txt", patternBox);
				 break;
			 case 1: //Из высшего учебного заведения
				 LoadFromFile("ToJobFromHighSchool.txt", patternBox);
				 break;
			 case 2: //Военный комиссариат
				 LoadFromFile("Military.txt", patternBox);
				 break;
			 case 3: //Пользовательский шаблон
				 //Разрешаем открывать свои файлы
				 открытьToolStripMenuItem->Enabled = true;
				 break;
			 default:
				 break;
			 }

			 if(отменитьФорматированиеToolStripMenuItem->Enabled == false)
				форматироватьToolStripMenuItem->Enabled = true;
			 else {
				 //При форматировании шаблона во временный файл сохраняется
				 //содержимое patternBox, удаляем этот файл
				 File::Delete("patternBox.txt");
				 отменитьФорматированиеToolStripMenuItem->Enabled = false;
				 форматироватьToolStripMenuItem->Enabled = true;
			 }
			 //Знак, что данные сохранены
			 параметрыХарактеристикиToolStripMenuItem->BackColor = Drawing::Color::PaleGreen;
		 }
//Открытие справки
private: System::Void helpButt_Click(System::Object^  sender, System::EventArgs^  e) {
			 UserHelp^ HelpForm = gcnew UserHelp();
			 HelpForm->Show();
		 }

		 //Обработка панели ввода личных данных
//Нажатие Enter в поле ФИО
private: System::Void SurnameTextBox_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if(Char::IsControl(e->KeyChar))
				 if(e->KeyChar == (char)Keys::Enter)
					 DateTimePicker->Focus(); //фокус на следующий TextBox
				 return;
		 }
private: System::Void SurnameTextBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 //Если введены все данные
			 if(SurnameTextBox->Text->Length >= 4 && DateTimePicker->Checked && (ManRadioButton->Checked || GirlRadioButton->Checked))
				 savebutt2->Enabled = true;
			 else savebutt2->Enabled = false;
		 }
private: System::Void DateTimePicker_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 //Если введены все данные
			 if(SurnameTextBox->Text->Length >= 4 && DateTimePicker->Checked && (ManRadioButton->Checked || GirlRadioButton->Checked))
				 savebutt2->Enabled = true;
			 else savebutt2->Enabled = false;
		 }
private: System::Void ManRadioButton_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 //Если введены все данные
			 if(SurnameTextBox->Text->Length >= 4 && DateTimePicker->Checked)
				 savebutt2->Enabled = true;
			 else savebutt2->Enabled = false;
		 }
private: System::Void GirlRadioButton_CheckedChanged_1(System::Object^  sender, System::EventArgs^  e) {
			 //Если введены все данные
			 if(SurnameTextBox->Text->Length >= 4 && DateTimePicker->Checked)
				 savebutt2->Enabled = true;
			 else savebutt2->Enabled = false;
		 }
//Сохранение данных
private: System::Void savebutt2_Click(System::Object^  sender, System::EventArgs^  e) {
			 surname = SurnameTextBox->Text;
			 age = DateTimePicker->Value.Date.ToString("d");

			 //Знак, что данные сохранены
			 личныеДанныеToolStripMenuItem->BackColor = Drawing::Color::PaleGreen;
		 }

		 //Обработка панели выбора личных качества
//Отслеживание позитивности/негативности характеристики
private: System::Void TraitCheckedListBox_ItemCheck(System::Object^  sender, System::Windows::Forms::ItemCheckEventArgs^  e) {
			 //Если пользователь выбрал позитивное качество
			 if(e->CurrentValue == CheckState::Unchecked && e->NewValue == CheckState::Checked)
				 posMood += 1;
			 //Если отменил свой выбор
			 else posMood -= 1;

			 if(negMood != 0 || posMood != 0) savebutt3->Enabled = true;
			 else savebutt3->Enabled = false;

			 CalcMood(); //Расчёт настроения характеристики
		 }
//Отслеживание позитивности/негативности характеристики
private: System::Void TraitCheckedListBox2_ItemCheck(System::Object^  sender, System::Windows::Forms::ItemCheckEventArgs^  e) {
			 //Если пользователь выбрал негативное качество
			 if(e->CurrentValue == CheckState::Unchecked && e->NewValue == CheckState::Checked)
				 negMood += 1;
			 //Если отменил свой выбор
			 else negMood -= 1;

			 if(negMood != 0 || posMood != 0) savebutt3->Enabled = true;
			 else savebutt3->Enabled = false;

			 CalcMood(); //Расчёт настроения характеристики
		 }
//Отслеживание позитивности/негативности характеристики
private: System::Void HabitsCheckedListBox_ItemCheck(System::Object^  sender, System::Windows::Forms::ItemCheckEventArgs^  e) {
			 //Если пользователь выбрал негативное качество
			 if(e->CurrentValue == CheckState::Unchecked && e->NewValue == CheckState::Checked)
				 negMood += 1;
			 //Если отменил свой выбор
			 else negMood -= 1;

			 if(negMood != 0 || posMood != 0) savebutt3->Enabled = true;
			 else savebutt3->Enabled = false;

			 CalcMood(); //Расчёт настроения характеристики
		 }
//Отслеживание позитивности/негативности характеристики
private: System::Void HobbyCheckedListBox_ItemCheck(System::Object^  sender, System::Windows::Forms::ItemCheckEventArgs^  e) {
			 //Если пользователь выбрал позитивное качество
			 if(e->CurrentValue == CheckState::Unchecked && e->NewValue == CheckState::Checked)
				 posMood += 1;
			 //Если отменил свой выбор
			 else posMood -= 1;

			 if(negMood != 0 || posMood != 0) savebutt3->Enabled = true;
			 else savebutt3->Enabled = false;

			 CalcMood(); //Расчёт настроения характеристики
		 }
//Сохранение личные качеств
private: System::Void savebutt3_Click(System::Object^  sender, System::EventArgs^  e) {
			 //Сохранение позитивных качеств
			 positiveTrait = "";
			 for(int i = 0; i < TraitCheckedListBox->CheckedItems->Count; i++) {
				if(i == TraitCheckedListBox->CheckedItems->Count - 1) //Последнее слово перечисления
					positiveTrait += Convert::ToString(TraitCheckedListBox->CheckedItems[i]);
				else //Остальные слова
					positiveTrait += Convert::ToString(TraitCheckedListBox->CheckedItems[i]) + ", ";
			 }
			 positiveTrait = positiveTrait->ToLower();
			 //Сохранение негативных качеств
			 negativeTrait = "";
			 for(int i = 0; i < TraitCheckedListBox2->CheckedItems->Count; i++) {
				 if(i == TraitCheckedListBox2->CheckedItems->Count - 1) //Последнее слово перечисления
					negativeTrait += Convert::ToString(TraitCheckedListBox2->CheckedItems[i]);
				 else //Остальные слова
					negativeTrait += Convert::ToString(TraitCheckedListBox2->CheckedItems[i]) + ", ";
			 }
			 negativeTrait = negativeTrait->ToLower();
			 //Сохранение плохих привычек
			 badHabbits = "";
			 for(int i = 0; i < HabitsCheckedListBox->CheckedItems->Count; i++) {
				 if(i == HabitsCheckedListBox->CheckedItems->Count - 1) //Последнее слово перечисления
					badHabbits += Convert::ToString(HabitsCheckedListBox->CheckedItems[i]);
				 else //Остальные слова
					badHabbits += Convert::ToString(HabitsCheckedListBox->CheckedItems[i]) + ", ";
			 }
			 badHabbits = badHabbits->ToLower();
			 if(badHabbits == "") badHabbits = "ничего замечено не было";
			 //Сохранение увлечений
			 hobby = "";
			 for(int i = 0; i < HobbyCheckedListBox->CheckedItems->Count; i++) {
				 if(i == HobbyCheckedListBox->CheckedItems->Count - 1) //Последнее слово перечисления
					hobby += Convert::ToString(HobbyCheckedListBox->CheckedItems[i]);
				 else //Остальные слова
					hobby += Convert::ToString(HobbyCheckedListBox->CheckedItems[i]) + ", ";
			 }
			 hobby = hobby->ToLower();
			 if(hobby == "") hobby = "ничего замечено не было";

			 //Знак, что данные сохранены
			 личныеКачестваToolStripMenuItem->BackColor = Drawing::Color::PaleGreen;
		 }

	//Обработка компонентов ContextMenuStrip
//Удалить выбранные элементы
private: System::Void удалитьВыделенныеЭлементыToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			CheckedListBox^ checkedListBox = dynamic_cast<CheckedListBox^>(contextMenuStrip->SourceControl); //из какого CheckedListBox был вызван ContextMenuStrip
			if(checkedListBox->Name == "TraitCheckedListBox")
				DeleteFromCheckedListBox(checkedListBox, "PositiveTrait.txt", true);
			if(checkedListBox->Name == "TraitCheckedListBox2")
				DeleteFromCheckedListBox(checkedListBox, "NegativeTrait.txt", false);
			if(checkedListBox->Name == "HabitsCheckedListBox")
				DeleteFromCheckedListBox(checkedListBox, "BadHabbits.txt", false);
			if(checkedListBox->Name == "HobbyCheckedListBox")
				DeleteFromCheckedListBox(checkedListBox, "Hobby.txt", true);
		}
//Добавить элемент
private: System::Void добавитьЭлементToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			CheckedListBox^ checkedListBox = dynamic_cast<CheckedListBox^>(contextMenuStrip->SourceControl); //из какого CheckedListBox был вызван ContextMenuStrip
			if(checkedListBox->Name == "TraitCheckedListBox")
				AddToCheckedListBox(checkedListBox, "PositiveTrait.txt");
			if(checkedListBox->Name == "TraitCheckedListBox2")
				AddToCheckedListBox(checkedListBox, "NegativeTrait.txt");
			if(checkedListBox->Name == "HabitsCheckedListBox")
				AddToCheckedListBox(checkedListBox, "BadHabbits.txt");
			if(checkedListBox->Name == "HobbyCheckedListBox")
				AddToCheckedListBox(checkedListBox, "Hobby.txt");
		}
//Текстовое поле добавления элементов
private: System::Void newElemToolStripTextBox_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if(Char::IsControl(e->KeyChar))
				 if(e->KeyChar == (char)Keys::Enter)
					 добавитьЭлементToolStripMenuItem_Click(sender, e); //Вызываем событие кнопки "Добавить элемент"
		 }
//Снять выделение с элементов
private: System::Void снятьВыделениеСЭлементовToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 CheckedListBox^ checkedListBox = dynamic_cast<CheckedListBox^>(contextMenuStrip->SourceControl); //из какого CheckedListBox был вызван ContextMenuStrip
			 for(int i = 0; i < checkedListBox->Items->Count; i++)
				 checkedListBox->SetItemChecked(i, false);
		 }

		 //Обработка панели Дополнительно
//Если введены какие-либо данные
private: System::Void orgTextBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(orgTextBox->Text != "" || levelTextBox->Text != "" || familyTextBox->Text != "" || healthTextBox->Text != "")
				 savebutt4->Enabled = true;
			 else savebutt4->Enabled = false;
		 }
//Нажатие Enter
private: System::Void orgTextBox_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if(Char::IsControl(e->KeyChar))
				 if(e->KeyChar == (char)Keys::Enter)
					 levelTextBox->Focus(); //фокус на следующий TextBox
				 return;
		 }
//Если введены какие-либо данные
private: System::Void levelTextBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(orgTextBox->Text != "" || levelTextBox->Text != "" || familyTextBox->Text != "" || healthTextBox->Text != "")
				 savebutt4->Enabled = true;
			 else savebutt4->Enabled = false;
		 }
//Нажатие Enter
private: System::Void levelTextBox_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if(Char::IsControl(e->KeyChar))
				 if(e->KeyChar == (char)Keys::Enter)
					 familyTextBox->Focus(); //фокус на следующий TextBox
				 return;
		 }
//Если введены какие-либо данные
private: System::Void familyTextBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(orgTextBox->Text != "" || levelTextBox->Text != "" || familyTextBox->Text != "" || healthTextBox->Text != "")
				 savebutt4->Enabled = true;
			 else savebutt4->Enabled = false;
		 }
//Нажатие Enter
private: System::Void familyTextBox_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if(Char::IsControl(e->KeyChar))
				 if(e->KeyChar == (char)Keys::Enter)
					 healthTextBox->Focus(); //фокус на следующий TextBox
				 return;
		 }
//Если введены какие-либо данные
private: System::Void healthTextBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(orgTextBox->Text != "" || levelTextBox->Text != "" || familyTextBox->Text != "" || healthTextBox->Text != "")
				 savebutt4->Enabled = true;
			 else savebutt4->Enabled = false;
		 }
//Нажатие Enter
private: System::Void healthTextBox_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if(Char::IsControl(e->KeyChar))
				 if(e->KeyChar == (char)Keys::Enter)
					 savebutt4->Focus(); //Фокус на сохранение данных
				 return;
		 }
//Сохранение данных
private: System::Void savebutt4_Click(System::Object^  sender, System::EventArgs^  e) {
			 //Везде проверяется, ввёл ли пользователь данные
			 if(orgTextBox->Text != "")
				organisation = orgTextBox->Text;
			 if(levelTextBox->Text != "")
				level = levelTextBox->Text;
			 if(familyTextBox->Text != "")
				family = familyTextBox->Text;
			 if(healthTextBox->Text != "")
				health = healthTextBox->Text;

			 //Знак, что данные сохранены
			 дополнительноToolStripMenuItem->BackColor = Drawing::Color::PaleGreen;
		 }

		//Обработка панели настройки шаблона
		//Обработка компонентов patternMenu (ФАЙЛ)
//Открытие файла
private: System::Void открытьToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 patternBox->Clear();
			 if(openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				 Stream^ s;
				 if((s = openFileDialog1->OpenFile()) != nullptr) {
					 String^ path = openFileDialog1->FileName; //Имя файла
					 LoadFromFile(path, patternBox);
				 }
				 else MessageBox::Show("Ошибка открытия файла", "Предупреждение");
				 s->Close();
			 }
		}
//Сохранение файла
private: System::Void сохранитьКакToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) {
			if(saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				String^ path =  saveFileDialog1->FileName; //Имя файла
				SaveToFile(path, patternBox);
			}
		}
//Печать
private: System::Void печатьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(printDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				MessageBox::Show("Идёт печать");
		}

		 //Обработка компонентов patternMenu (Шрифт)
//Выбор шрифта текстового поля
private: System::Void шрифтToolStripMenu_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(fontDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 patternBox->Font = fontDialog1->Font; //Сохранение шрифта
		}
private: System::Void fontDialog1_Apply(System::Object^  sender, System::EventArgs^  e) {
			 patternBox->Font = fontDialog1->Font; //Сохранение шрифта
			 }

		//Обработка компонентов patternMenu (Форматирование)
//Форматирование шаблона
private: System::Void форматироватьToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 //Сохранение содержимого patternBox, для возможности отмены форматирования
			 SaveToFile("patternBox.txt", patternBox);
			 //Форматирование в зависимости от выбранного пола
			 if(ManRadioButton->Checked) { //Мужской пол
				 patternBox->Text = patternBox->Text->Replace("(гося/йся)", "гося");
				 patternBox->Text = patternBox->Text->Replace("(та/тки)", "та");
			 }
			 if(GirlRadioButton->Checked) { //Женский пол
				 patternBox->Text = patternBox->Text->Replace("(гося/йся)", "йся");
				 patternBox->Text = patternBox->Text->Replace("(та/тки)", "тки");
			 }
			 //Подстановка введённых пользователем данных
			 if(surname != nullptr)
				patternBox->Text = patternBox->Text->Replace("{ФИО}", surname);
			 if(age != nullptr)
				patternBox->Text = patternBox->Text->Replace("{Год рождения}", age);
			 if(positiveTrait != nullptr && positiveTrait != "")
				patternBox->Text = patternBox->Text->Replace("{Позитивные качества}", positiveTrait);
			 if(negativeTrait != nullptr && negativeTrait != "")
				patternBox->Text = patternBox->Text->Replace("{Негативные качества}", negativeTrait);
			 if(badHabbits != nullptr)
				patternBox->Text = patternBox->Text->Replace("{Вредные привычки}", badHabbits);
			 if(hobby != nullptr)
				patternBox->Text = patternBox->Text->Replace("{Увлечения}", hobby);
			 if(organisation != nullptr)
				patternBox->Text = patternBox->Text->Replace("{Наименование организации}", organisation);
			 if(level != nullptr)
				patternBox->Text = patternBox->Text->Replace("{Уровень образования}", level);
			 if(health != nullptr)
				patternBox->Text = patternBox->Text->Replace("{Уровень здоровья}", health);
			 if(family != nullptr)
				patternBox->Text = patternBox->Text->Replace("{Семейное положение}", family);

			 форматироватьToolStripMenuItem->Enabled = false;
			 отменитьФорматированиеToolStripMenuItem->Enabled = true;
		 }

		//Обработка компонентов patternMenu (Отменить форматирование)
//Отменить форматирование
private: System::Void отменитьФорматированиеToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 patternBox->Clear();
			 LoadFromFile("patternBox.txt", patternBox);

			 форматироватьToolStripMenuItem->Enabled = true;
			 отменитьФорматированиеToolStripMenuItem->Enabled = false;
		 }
};
}

