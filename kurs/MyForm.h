#pragma once
#include <time.h>
namespace kurs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(224, 44);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(578, 225);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 216);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(145, 53);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 170);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 154);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Размерность:";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(900, 44);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(103, 225);
			this->dataGridView2->TabIndex = 5;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(1145, 44);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(103, 225);
			this->dataGridView3->TabIndex = 6;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Пример 1", L"Пример 2", L"Пример 3" });
			this->comboBox1->Location = System::Drawing::Point(12, 44);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 7;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->label2->Location = System::Drawing::Point(156, 123);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 31);
			this->label2->TabIndex = 8;
			this->label2->Text = L"A = ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->label3->Location = System::Drawing::Point(835, 123);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 31);
			this->label3->TabIndex = 9;
			this->label3->Text = L"b = ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->label4->Location = System::Drawing::Point(1082, 123);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 31);
			this->label4->TabIndex = 10;
			this->label4->Text = L"x = ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(9, 28);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(124, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Выбор готовой задачи:";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox1->Location = System::Drawing::Point(6, 19);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(608, 173);
			this->richTextBox1->TabIndex = 12;
			this->richTextBox1->Text = resources->GetString(L"richTextBox1.Text");
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->richTextBox1);
			this->groupBox1->Location = System::Drawing::Point(12, 346);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(620, 198);
			this->groupBox1->TabIndex = 13;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Описание задачи";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->richTextBox2);
			this->groupBox2->Location = System::Drawing::Point(638, 346);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(620, 198);
			this->groupBox2->TabIndex = 14;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Система";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->richTextBox2->Location = System::Drawing::Point(6, 19);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(608, 173);
			this->richTextBox2->TabIndex = 13;
			this->richTextBox2->Text = L"";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1274, 556);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"Метод прогонки";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		dataGridView2->RowHeadersVisible = false;
		dataGridView3->RowHeadersVisible = false;

		dataGridView1->AllowUserToAddRows = false;

		dataGridView2->AllowUserToAddRows = false;
		dataGridView3->AllowUserToAddRows = false;
	}
	
	
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int m = 0;
		m = Convert::ToInt64(textBox1->Text);

		double** matrix = new double*[m];
		double* b = new double[m];
		
		for (int i = 0; i < m; i++)
		{
			matrix[i] = new double[3];
			b[i] = Convert::ToDouble(dataGridView2[0, i]->Value);
		}



		//-----------------------Запись 3-х диагональной матрицы------------------------//
		matrix[0][0] = 0.;																															//	matrix[i][j], где i = кол-во строк/столбцов,
		matrix[0][1] = Convert::ToDouble(dataGridView1[0, 0]->Value);										//										j = 0, 1, 2, где 0 - нижняя диагональ, 
		matrix[0][2] = Convert::ToDouble(dataGridView1[1, 0]->Value);										//																		 1 - главная диагональ,
																																										//																		 2 - верхняя дииагональ.
		for (int i = 1; i < m - 1; i++)																									//
		{																																								//
			for (int j = 0; j < 3; j++)																										//
			{																																							//
				matrix[i][j] = Convert::ToDouble(dataGridView1[j + i - 1, i]->Value);				//
			}																																							//
																																										//
		}																																								//
																																										//
		matrix[m-1][0] = Convert::ToDouble(dataGridView1[m-2, m-1]->Value);							//
		matrix[m-1][1] = Convert::ToDouble(dataGridView1[m-1, m-1]->Value);							//
		matrix[m-1][2] = 0.;																														//
		//------------------------------------------------------------------------------//


		double* alfa = new double[m];
		double* beta = new double[m];
		double* x = new double[m];


		//---------------------------Прямой ход----------------------------//
																																										//	Используя матрицу m X 3
																																										//
		/*x[0] = matrix[0][1];																													//
		alfa[0] = -1. * matrix[0][2] / x[0];																						//
		beta[0] = b[0] / x[0];
		
		for (int i = 1; i < m-1; i++)
		{
			x[i] = matrix[i][1] + matrix[i][0] * alfa[i-1];
			alfa[i] = -1. * matrix[i][2] /(x[i]);
			beta[i] = (b[i] - matrix[i][0] * beta[i-1])/x[i];
		}

		x[m - 1] = matrix[m - 1][1] + matrix[m - 1][0] * alfa[m-2];
		beta[m - 1] = (b[m - 1] - matrix[m - 1][0] * beta[m - 2]) / x[m - 1];*/

		x[0] = Convert::ToDouble(dataGridView1[0, 0]->Value);																																										//	То же самое, но обращаясь 
		alfa[0] = -1. * Convert::ToDouble(dataGridView1[1, 0]->Value) / x[0];																																		//	напрямую к исходной матрице
		beta[0] = b[0] / x[0];																																																									//
																																																																						// 
		for (int i = 1; i < m - 1; i++)
		{
			x[i] = Convert::ToDouble(dataGridView1[i, i]->Value) + Convert::ToDouble(dataGridView1[i - 1, i]->Value) * alfa[i - 1];
			alfa[i] = -1. * Convert::ToDouble(dataGridView1[i + 1, i]->Value) / (x[i]);
			beta[i] = (b[i] - Convert::ToDouble(dataGridView1[i - 1, i]->Value) * beta[i - 1]) / x[i];
		}

		x[m - 1] = Convert::ToDouble(dataGridView1[m - 1, m - 1]->Value) + Convert::ToDouble(dataGridView1[m - 2, m - 1]->Value) * alfa[m - 2];
		beta[m - 1] = (b[m - 1] - Convert::ToDouble(dataGridView1[m - 2, m - 1]->Value) * beta[m - 2]) / x[m - 1];

		/*-----------------------------------------------------------------//
		* 
		* 
		* 
		//------------------Обратный ход-----------------*/
		x[m - 1] = beta[m - 1];
		for (int i = m - 2; i >= 0; i--)
		{
			
			x[i] = alfa[i] * x[i + 1] + beta[i];
			dataGridView3->Rows[i]->Cells[0]->Value = x[i];
		}
		dataGridView3->Rows[m-1]->Cells[0]->Value = x[m-1];
		//-----------------------------------------------//
		

		richTextBox2->Text = Convert::ToString(dataGridView1[0, 0]->Value) + "*x0 + " + Convert::ToString(dataGridView1[1, 0]->Value) + "*x1 = " + Convert::ToString(b[0]) + "\n";
		for (int i = 1; i < m - 1; i++)
		{
			richTextBox2->Text += Convert::ToString(dataGridView1[i - 1, i]->Value) + "*x" + Convert::ToString(i - 1) + " + " + Convert::ToString(dataGridView1[i, i]->Value) + "*x" + Convert::ToString(i) + " + " + Convert::ToString(dataGridView1[i + 1, i]->Value) + "*x" + Convert::ToString(i + 1) + " = " + Convert::ToString(b[i]) + "\n";
		}
		richTextBox2->Text += Convert::ToString(dataGridView1[m-2, m-1]->Value) + "*x" + Convert::ToString(m-2) + " + " + Convert::ToString(dataGridView1[m - 1, m - 1]->Value) + "*x" + Convert::ToString(m-1) + " = " + Convert::ToString(b[m - 1]);

		for (int i = 0; i < m; i++)
			delete[] matrix[i];
		delete[] matrix;
		delete[] x;
		delete[] b;
		delete[] beta;
		delete[] alfa;
		//dataGridView1->Rows->Clear();
		//dataGridView1->Columns->Clear();
		//for (int i = 0; i < 3; i++)
		//	dataGridView1->Columns->Add(Convert::ToString(i), Convert::ToString(i));
		//for (int i = 0; i < m; i++)
		//dataGridView1->Rows->Add();

		//for (int i = 0; i < m; i++)
		//	for (int j = 0; j < 3; j++)
		//		dataGridView1->Rows[i]->Cells[j]->Value = matrix[i][j];

	}



	
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		dataGridView1->Rows->Clear();
		dataGridView1->Columns->Clear();

		dataGridView2->Rows->Clear();
		dataGridView2->Columns->Clear();

		dataGridView3->Rows->Clear();
		dataGridView3->Columns->Clear();

		dataGridView2->Columns->Add("b", "b");
		dataGridView3->Columns->Add("x", "x");

		for (int i = 0; i < Convert::ToInt64(textBox1->Text); i++)										//
		{																																							//
			dataGridView1->Columns->Add(Convert::ToString(i), Convert::ToString(i));		//
			dataGridView1->Rows->Add();																									//	
			dataGridView1->Rows[i]->HeaderCell->Value = Convert::ToString(i);						//	Создание пустой матрицы
																																									//
			dataGridView2->Rows->Add();																									//
																																									//
			dataGridView3->Rows->Add();																									//
		}																																							//

		for (int i = 0; i < Convert::ToInt64(textBox1->Text); i++)			//
			for (int j = 0; j < Convert::ToInt64(textBox1->Text); j++)		//	Заполнение пустой матрицы нулями при вводе размерности
				dataGridView1[i, j]->Value = 0.;														//

	}


private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
{
	switch (comboBox1->SelectedIndex)
	{
		case 0:
		{
			textBox1->Text = "3";

			dataGridView1->Rows->Clear();
			dataGridView1->Columns->Clear();

			dataGridView2->Rows->Clear();
			dataGridView2->Columns->Clear();

			dataGridView3->Rows->Clear();
			dataGridView3->Columns->Clear();

			dataGridView2->Columns->Add("b", "b");
			dataGridView3->Columns->Add("x", "x");

			for (int i = 0; i < 3; i++)										//
			{																																							//
				dataGridView1->Columns->Add(Convert::ToString(i), Convert::ToString(i));		//
				dataGridView1->Rows->Add();																									//	
				dataGridView1->Rows[i]->HeaderCell->Value = Convert::ToString(i);						//	Создание пустой матрицы
				//
				dataGridView2->Rows->Add();																									//
				//
				dataGridView3->Rows->Add();																									//
			}

			dataGridView1[0, 0]->Value = 3.;
			dataGridView1[1, 0]->Value = 1.;
			dataGridView1[2, 0]->Value = 0.;

			dataGridView1[0, 1]->Value = 1.;
			dataGridView1[1, 1]->Value = 7.;
			dataGridView1[2, 1]->Value = 2.;

			dataGridView1[0, 2]->Value = 0.;
			dataGridView1[1, 2]->Value = 2.;
			dataGridView1[2, 2]->Value = 9.;

			dataGridView2[0, 0]->Value = 7.;
			dataGridView2[0, 1]->Value = 11.;
			dataGridView2[0, 2]->Value = 11.;

			//richTextBox2->Text = "3*x1 + x2 = 7\n";
			//richTextBox2->Text += "1*x1 + 7*x2 + 2*x3 = 1\n";
			//richTextBox2->Text += "2*x2 + 9*x3 = 11\n";

			break;
		}
		case 1:
		{
			textBox1->Text = "4";
			dataGridView1->Rows->Clear();
			dataGridView1->Columns->Clear();

			dataGridView2->Rows->Clear();
			dataGridView2->Columns->Clear();

			dataGridView3->Rows->Clear();
			dataGridView3->Columns->Clear();

			dataGridView2->Columns->Add("b", "b");
			dataGridView3->Columns->Add("x", "x");

			for (int i = 0; i < 4; i++)										//
			{																																							//
				dataGridView1->Columns->Add(Convert::ToString(i), Convert::ToString(i));		//
				dataGridView1->Rows->Add();																									//	
				dataGridView1->Rows[i]->HeaderCell->Value = Convert::ToString(i);						//	Создание пустой матрицы
				//
				dataGridView2->Rows->Add();																									//
				//
				dataGridView3->Rows->Add();																									//
			}

			dataGridView1[0, 0]->Value = 2.;
			dataGridView1[1, 0]->Value = 1.;
			dataGridView1[2, 0]->Value = 0.;
			dataGridView1[3, 0]->Value = 0.;

			dataGridView1[0, 1]->Value = 1.;
			dataGridView1[1, 1]->Value = 10.;
			dataGridView1[2, 1]->Value = -5.;
			dataGridView1[3, 1]->Value = 0.;

			dataGridView1[0, 2]->Value = 0.;
			dataGridView1[1, 2]->Value = 1.;
			dataGridView1[2, 2]->Value = -5.;
			dataGridView1[3, 2]->Value = 2.;

			dataGridView1[0, 3]->Value = 0.;
			dataGridView1[1, 3]->Value = 0.;
			dataGridView1[2, 3]->Value = 1.;
			dataGridView1[3, 3]->Value = 4.;

			dataGridView2[0, 0]->Value = -5.;
			dataGridView2[0, 1]->Value = -18.;
			dataGridView2[0, 2]->Value = -40.;
			dataGridView2[0, 3]->Value = -27.;

			//richTextBox2->Text = "2*x1 + x2 = -5\n";
			//richTextBox2->Text += "1*x1 + 10*x2 - 5*x3 = -18\n";
			//richTextBox2->Text += "x2 - 5*x3 + 2*x4 = -40\n";
			//richTextBox2->Text += "x3 + 4*x4 = -27\n";

			break;
		}
		case 2:
		{
			textBox1->Text = "4";
			dataGridView1->Rows->Clear();
			dataGridView1->Columns->Clear();

			dataGridView2->Rows->Clear();
			dataGridView2->Columns->Clear();

			dataGridView3->Rows->Clear();
			dataGridView3->Columns->Clear();

			dataGridView2->Columns->Add("b", "b");
			dataGridView3->Columns->Add("x", "x");

			for (int i = 0; i < 4; i++)										//
			{																																							//
				dataGridView1->Columns->Add(Convert::ToString(i), Convert::ToString(i));		//
				dataGridView1->Rows->Add();																									//	
				dataGridView1->Rows[i]->HeaderCell->Value = Convert::ToString(i);						//	Создание пустой матрицы
				//
				dataGridView2->Rows->Add();																									//
				//
				dataGridView3->Rows->Add();																									//
			}

			dataGridView1[0, 0]->Value = 5.;
			dataGridView1[1, 0]->Value = -1.;
			dataGridView1[2, 0]->Value = 0.;
			dataGridView1[3, 0]->Value = 0.;

			dataGridView1[0, 1]->Value = 2.;
			dataGridView1[1, 1]->Value = 4.6;
			dataGridView1[2, 1]->Value = -1.;
			dataGridView1[3, 1]->Value = 0.;

			dataGridView1[0, 2]->Value = 0.;
			dataGridView1[1, 2]->Value = 2.;
			dataGridView1[2, 2]->Value = 3.6;
			dataGridView1[3, 2]->Value = -0.8;

			dataGridView1[0, 3]->Value = 0.;
			dataGridView1[1, 3]->Value = 0.;
			dataGridView1[2, 3]->Value = 3.;
			dataGridView1[3, 3]->Value = 4.4;

			dataGridView2[0, 0]->Value = 2.;
			dataGridView2[0, 1]->Value = 3.3;
			dataGridView2[0, 2]->Value = 2.6;
			dataGridView2[0, 3]->Value = 7.2;

			//richTextBox2->Text = "5*x1 - x2 = 2\n";
			//richTextBox2->Text += "2*x1 + 4.6*x2 - 1*x3 = 3.3\n";
			//richTextBox2->Text += "2*x2 + 3.6*x3 -0.8*x4 = 2.6\n";
			//richTextBox2->Text += "3*x3 + 4.4*x4 = 7.2\n";

			break;
		}

	default:
		break;
	}

}


};
}
