//lang.h
#define json_EN_summary_report	"* SUMMARY REPORT *"
#define json_EN_detailed_report "* DETAILED REPORT *"
#define Lang_Version_Number " نسخة رقم"
#define Lang_ArabicKeyboard "/u/u/u/u/u/u/u/u/u/u/u/u/u/u/u/u/u/u/u/u/u/u/u/u/u/u/u/u/u/u/u/u/u/u/u/u/u/u/u/u|ابتثجحخدذرزسشصضطظعغفقكلمنهوي\n أإآءةؤئلالآلأ@_.1234567890"
#define Lang_Header_rpt1 "جمهورية السودان"
#define Lang_Header_rpt2 "وزارة المالية والتخطيط الإقتصادي"
#define Lang_Header_rpt3 "تقرير تفصيلي للإيصالات بالطرفية"
#define Lang_Header_Failed "الإيصالات التي فشل تحميلها"


#define jsonArabicKeyboard_Window "ابتثجحخ\nدذرزسشص\nضطظعغفق\nكلمنهو\nيأإآءة\nؤئلالآلأ\n" GL_KEY_UTF8_PAGE_UP GL_KEY_UTF8_PAGE_DOWN GL_KEY_UTF8_CANCEL GL_KEY_UTF8_CORRECTION GL_KEY_UTF8_VALID
#define jsonArabicKeyboard_Window2 "123","123\n456\n789\n.0*\n" GL_KEY_UTF8_PAGE_UP GL_KEY_UTF8_PAGE_DOWN GL_KEY_UTF8_CANCEL GL_KEY_UTF8_CORRECTION GL_KEY_UTF8_VALID
#define jsonArabicKeyboard_Window3 "#$%", "[]{}()\n<>=+-/\n!?,;:\\\n|^@_&*\n`'\"#$%\n" GL_KEY_UTF8_PAGE_UP GL_KEY_UTF8_PAGE_DOWN GL_KEY_UTF8_CANCEL GL_KEY_UTF8_CORRECTION GL_KEY_UTF8_VALID
#define jsonArabicKbd1 "اتثجح\n"
#define jsonArabicKbd2	"خدذرز\n"
#define jsonArabicKbd3	"طظعسشصض\n"
#define jsonArabicKbd4	"غفقكلم\n"
#define jsonArabicKbd5	"نهويء\n"

//receipt
#define json_ReciptNumber " :رقم الايصال "
#define json_UnitNumber " :رقم الوحدة "
#define json_Name " :وصل من"
#define json_IdentityNumber " :رقم الهوية "
#define json_IdentityType " :نوع الهوية "
#define json_PaymentMethod " :طريقة الدفع "
#define json_PaymentServerDescription  " :البيان "
#define json_PaymentDescription ": تعليق"
#define json_Total " :المبلغ الكلي "
#define json_TotalWords " :المبلغ كتابة "
#define json_currency_fraction "جزء العملة"
#define json_AmountInWords " :المبلغ كتابة"
#define json_Date " :التاريخ"
#define json_CollectorName " :إسم المتحصل "
#define json_UnitName " :الوحدة "
#define json_VAT " :قيمة مضافة"
#define json_StampDuty " :الدمغة "
#define json_Currency " :العملة "
#define json_Header_one "جمهورية السودان "
#define json_Header_two "وزارة المالية والتخطيط الاقتصادي"
#define json_Particulars "البيان"
#define json_CopyReceipt  "إعادة طباعة"
#define json_Receipt_count " : عدد الايصالات المصدرة"
#define json_Total_Amount " : السداد الكلي"
#define json_service " : الخدمة"
#define json_Amount ": المبلغ"
#define json_summary_report	"تقرير ملخص"
#define json_detailed_report "تقرير تفصيلي"
#define json_67_Header_one "جمهورية السودان"
#define json_67_Header_two "وزارة المالية والتخطيط الإقتصادي"
#define json_Generate_Header_67   "إستخراج تقرير 76"
#define json_Check_Header_67   "إستعراض تقرير 76"

/////--------------------------------------------------------------------------------------

//==== English
#ifdef __ENGLISH_APP__
/////--------------------------------------------------------------------------------------
///////////======= english WORDS IN APPLICATION  =====
/////--------------------------------------------------------------------------------------
///////////======= english WORDS IN APPLICATION  =====
//entry
#define json_PayerName  "PAYER NAME: "
#define json_PayerId  "PAYER ID: "
#define json_PayerIdType  "PAYER ID TYPE: "
#define json_PleaseEnter  "PLEASE ENTER"
#define json_memoryreset "MEMORY RESET"
#define json_PhoneNumber "PHONE NUMBER"
#define json_RefID "REF ID"
#define json_InvoiceNo "INVOICE NUMBER"


//application flow
#define json_new_software "NEW SOFTWARE"
#define json_Description "DESCRIPTION"
#define json_comment "COMMENT"
#define json_done "DONE"
#define json_login "LOG IN"
#define	json_National_Payment "NATIONAL PAYMENT"
#define json_Payment	"PAYMENT"
#define json_Reports	"REPORTS?"
#define json_Programming "PROGRAMMING"
#define json_terminal_prameters "TERMINAL PARAMETERS"
#define json_operations "OPERATIONS"
#define json_Please_enter_payer_name	"PLEASE ENTER PAYER NAME"
#define json_please_enter_identity "PLEASE ENTER IDENTITY"
#define json_please_enter_identity_type "PLEASE ENTER IDENTITY TYPE"
#define json_service_list "SERVICE LIST"
#define json_sub_service_list "SUB SERVICE LIST"
#define json_select_another_service	"SELECT ANOTHER SERVICE?"
#define json_Do_transaction	"DO TRANSACTION"
#define json_Query_Invoice "QUERY INVOICE"
#define json_yes "YES = GREEN"
#define json_no "NO = RED"
#define json_yes_no "YES = GREEN\nNO = RED"
#define json_enter "ENTER"
#define json_clear "CLEAR"
#define json_has_vat	"HAS VAT"
#define json_has_discount "HAS DISCOUNT?"
#define json_enter_stamp "ENTER STAMP: "
#define json_payment_method	"PAYMENT METHOD "
#define json_payment_method_list "PAYMENT METHOD LIST"
#define json_connecting	"CONNECTING..."
#define json_connectionfailed  "CONNECTION FAILED "
#define json_Please_wait "Please wait..."
#define json_sending	"Sending..."
#define json_receiving "Receiving.. "
#define json_approved "APPROVED "
#define json_declined "DECLINED"
#define json_reading_data	"READING DATA "
#define json_print 	"PRINT"
#define json_printing_report "PRINTING REPORT"
#define json_customer_copy_printing	"CUSTOMER COPY PRINTING"
#define json_online	"ONLINE"
#define json_offline "OFFLINE"
#define json_please_enter_username "PLEASE ENTER USERNAME   "
#define json_please_enter_password	"PLEASE ENTER PASSWORD"
#define json_terminal "TERMINAL"
#define json_Receipt_No   "RECEIPT NUMBER: "
#define json_register_terminal "REGISTER TERMINAL"
#define json_please_enterusername	"PLEASE ENTER USERNAME"
#define json_please_password	"PLEASE ENTER PASSWORD"
#define json_from_date "FROM DATE"
#define json_to_date "TO DATE"
#define json_invalid_input "INVALID INPUT"
#define json_old_password "Old Password?  : "
#define json_new_password "New Password?  : "
#define json_please_confirm "please Confirm"
#define json_error "ERROR!!"
#define json_offline_misconfig "OFFLINE MISCONFIGURED"
#define json_thresholdError  "Threshold Exceeded"
/*NEW SUFF*/
#define json_Enter_Password    "ENTER PASSWORD"
#define json_Enter_TID 		"ENTER TID"
#define json_Message_SAVED   "SAVED"
#define json_Enter_MID		"ENTER MID"
#define json_Enter_PRI_IP		"ENTER PRI IP"
#define json_Enter_SEC_IP 	"ENTER SEC IP"
#define json_Enter_PORT		"ENTER PORT"
#define json_Confirm_Password 		"CONFIRM PASSWORD"
#define json_Cancel_Receipt		"CANCEL RECEIPT"
#define json_Printing		"PRINTING"
#define json_INVALID_ENTRY		"INVALID ENTRY"
#define json_OFFLINE_REPORT		"OFFLINE REPORT"
#define json_ACESS_DENIED		"ACCESS DENIED"
#define json_INVALID_PIN_CODE		"INVALID PIN CODE"
#define json_CustomerCopy "  CUSTOMER COPY "
#define json_Collecting_Data "COLLECTING DATA"
#define json_Retry "RE-TRY"
#define json_mnuResetUSB "RESET SD-CARD"

//menu
#define json_mnuMainMenu   "MAIN   MENU "
#define json_mnuCustomer   "PAYMENT>"
#define json_mnuJSON   "CASH"
#define json_mnuCashPayment   "CASH PAYMENT"
#define json_mnuCardPay   "CARD PAYMENT"
#define json_mnuIssueInvoice "ISSUE INVOICE"
#define json_mnuInvoicePay "INVOICE AND PAY"
#define json_mnuJSON_Logout   "LOGOUT"
#define json_mnuReports   "REPORTS"
#define json_mnuSummaryRpt   " SUMMARY REPORT"
#define json_mnuDetailRpt   "DETAILED REPORT "
#define json_mnuSupervisor   "REPORTS>"
#define json_mnuJSONSummaryRpt   "SUMMARY REPORT "
#define json_mnuJSONDetailRpt   "DETAILED REPORT "
#define json_mnuProgramming   "PROGRAMMING>"
#define json_mnuJSON_Par   "TERMINAL SETTING"
#define json_mnuJSONEchoTst   "CONNECTION TEST "
#define json_mnuMid   "MERCHANT ID"
#define json_mnuTid   "TERMINAL ID "
#define json_mnuConfigHost   "CONFIG HOST "
#define json_mnuCmmIS   "IP Setup "
#define json_mnuPrTConfig   "PRINT CONFIG"
#define json_mnuKeyMgt   "CRYPTO KEY MNGT"
#define json_mnuJSONKeyChange   "IMPORT KEY "
#define json_mnuLoadMaster   "LOAD MASTER KEY"
#define json_mnuName   "Merchant Name"
#define json_mnuLocation   "Merchant Location"
#define json_mnuAddress   "Merchant Address "
#define json_mnuAdmin   "OPERATIONS>"
#define json_mnuJSON_Upload   "OFFLINE UPLOAD"
//#define json_mnuJSON_cfg   "GET SERVICES"
#define json_mnuJSON_cfg   "GET SERVICE / REGISTER"
#define json_mnuJSON_Reg   "REGISTER TERMINAL"
#define json_mnuJSONChgPwd   "CHANGE PASSWORD"
#define json_mnuJSON_Rev   "CANCEL RECEIPT"
#define json_mnuJSON_Duplict   "GET RECEIPT"
#define json_mnuJSON_Update   "UPDATE"
#define json_mnuAdmChgPwd    "CHNG ADMIN PASS"
#define json_Generate_67   "GENERATE REPORT 67"
#define json_Check_67   "CHECK REPORT 67"
#define json_SwitchSim "SWITCH SIM"
#define json_mnuJSON_Reupload "OFFLINE RE-UPLOAD"


/////--------------------------------------------------------------------------------------
#else
//==== Arabic
/////--------------------------------------------------------------------------------------
///////////======= Arabic WORDS IN APPLICATION  =====
//entry
#define json_PayerName  ": وصل من"
#define json_PayerId  ": الرجاء إدخال رقم الهوية"
#define json_PayerIdType  ": الرجاء إدخال نوع الهوية"
#define json_PleaseEnter  "رجاء أدخل"
#define json_memoryreset "إعادة تعيين الذاكرة"
#define json_PhoneNumber "PHONE NUMBER"
#define json_RefID "REF ID"
#define json_InvoiceNo "INVOICE NUMBER"


//application flow
#define json_new_software "تطبيق جديد"
#define json_Description "تعليق"
#define json_comment "سبب"
#define json_done "الانتهاء"
#define json_login "تسجيل الدخول"
#define	json_National_Payment "التحصيل الإلكتروني"
#define json_Payment	"دفع إالكتروني"
#define json_Reports	"تقارير"
#define json_Programming "برمجة"
#define json_terminal_prameters "إعدادات الطرفية"
#define json_operations "عمليات أخري"
#define json_Please_enter_payer_name	"وصل من"
#define json_please_enter_identity "الرجاء إدخال رقم الهوية"
#define json_please_enter_identity_type "الرجاء إدخال نوع الهوية"
#define json_service_list "قائمة الخدمات"
#define json_sub_service_list "قائمة الخدمات الفرعية"
#define json_select_another_service	"أختر خدمة أخري"
#define json_Do_transaction	"قيمتها"
#define json_Query_Invoice "QUERY INVOICE"
#define json_yes "نعم"
#define json_no "لا"
#define json_yes_no "نعم \n لا"
#define json_enter "أدخال"
#define json_clear "حذف"
#define json_has_vat	"هل توجد ضريبة مضافة	"
#define json_has_discount "هل هناك تخفيضات؟"
#define json_enter_stamp "أدخل الدمغة"
#define json_payment_method	"طرق الدفع"
#define json_payment_method_list "قائمة طرق الدفع"
#define json_connecting	" .. يتصل الأن"
#define json_connectionfailed  "فشل الاتصال"
#define json_Please_wait "الرجاء الإنتظار"
#define json_sending	"جاري الإرسال"
#define json_receiving "جاري الإستقبال"
#define json_approved "تم بنجاح"
#define json_declined "رفض"
#define json_reading_data	"قراءة البيانات"
#define json_print 	"طباعة"
#define json_printing_report "طباعة تقرير"
#define json_customer_copy_printing	"طباعة نسخة للعميل"
#define json_online	"   متصل"
#define json_offline "   غير متصل	"
#define json_please_enter_username "الرجاء إدخال إسم المستخدم"
#define json_please_enter_password	"أدخل كلمة المرور"
#define json_terminal "طرفية"
#define json_Receipt_No   ": رقم الايصال"
#define json_register_terminal "تسجيل محطة"
#define json_please_enterusername	"الرجاء إدخال إسم المستخدم"
#define json_please_password	"الرجاء إدخال كلمة المرور"
#define json_from_date "من تاريخ"
#define json_to_date "إلى تاريخ"
#define json_invalid_input "إدخال غير صحيح"
#define json_old_password "كلمة المرور القديمة"
#define json_new_password "كلمة المرور الجديدة"
#define json_please_confirm "تاكيد كلمة المرور"
#define json_error "مشكلة"
#define json_offline_misconfig ""
#define json_thresholdError  "تجاوز الحد المسموح"
/*NEW STUFF*/
#define json_Enter_Password	 " أدخل كلمة المرور"
#define json_Enter_TID   "أدخل رقم الطرفية"
#define json_Message_SAVED	"حفظ"
#define json_Enter_MID		"أدخل رقم الطرفية"
#define json_Enter_PRI_IP		"أدخل عنوان المخدم الاول"
#define json_Enter_SEC_IP "أدخل عنوان المخدم الثاني"
#define json_Enter_PORT		"أدخل رقم البوابة"
#define json_Confirm_Password 		"تأكيد كلمة المرور"
#define json_Cancel_Receipt		"إلغاء إيصال"
#define json_Printing		"طباعة الايصال"
#define json_INVALID_ENTRY		"إدخال غير صحيح"
#define json_OFFLINE_REPORT			"تقرير إيصالات بالطرفية"
#define json_ACESS_DENIED		"تعذر الدخول"
#define json_INVALID_PIN_CODE		"كلمة مرور غير صحيح"
#define json_CustomerCopy "طباعة نسخة للعميل"
#define json_Collecting_Data "تجميع البيانات"
#define json_Retry "حاول مره أخري"
#define json_mnuResetUSB "إعادة تعيين SD -CARD"

//menu
#define json_mnuMainMenu   "القائمة الرئيسية "
#define json_mnuCustomer   " تحصيل إلكتروني"
#define json_mnuJSON   " دفع نقدي"
#define json_mnuCashPayment   " دفع نقدا"
#define json_mnuIssueInvoice "ISSUE INVOICE"
#define json_mnuInvoicePay "INVOICE AND PAY"
#define json_mnuCardPay   " دفع إالكتروني"
#define json_mnuJSON_Logout   " خروج "
#define json_mnuReports   " تقارير"
#define json_mnuSummaryRpt   " تقرير ملخص "
#define json_mnuDetailRpt   "تقرير تفصيلي "
#define json_mnuSupervisor   "تقارير"
#define json_mnuJSONSummaryRpt   "تقرير ملخص "
#define json_mnuJSONDetailRpt   "تقرير تفصيلي "
#define json_mnuProgramming   "برمجة"
#define json_mnuJSON_Par   "إعدادات الطرفية"
#define json_mnuJSONEchoTst   "إختبار الإتصال "
#define json_mnuMid   "رقم التاجر"
#define json_mnuTid   "رقم الطرفية "
#define json_mnuConfigHost   "ضبط المخدم "
#define json_mnuCmmIS   "ضبط رمز الشبكة"
#define json_mnuPrTConfig   "طباعة الإعدادات"
#define json_mnuKeyMgt   "ضبط مفتاح التشفير"
#define json_mnuJSONKeyChange   "تحميل المفتاح"
#define json_mnuLoadMaster   "تحميل مفتاح رئيسي"
#define json_mnuName   "إسم التاجر"
#define json_mnuLocation   "موقع التاجر"
#define json_mnuAddress   "عنوان التاجر "
#define json_mnuAdmin   "عمليات أخري"
#define json_mnuJSON_Upload   "تحميل الإيصالات "
//#define json_mnuJSON_cfg   "تحميل الخدمات"
#define json_mnuJSON_cfg   "تحميل/ تسجيل خدمات"
#define json_mnuJSON_Reg   "تسجيل الطرفية"
#define json_mnuJSONChgPwd   "تغيير كلمة السر"
#define json_mnuJSON_Rev   "إالغاء إيصال"
#define json_mnuJSON_Duplict   "إعادة طباعةإيصال"
#define json_mnuJSON_Update   "تحديث"
#define json_mnuAdmChgPwd    "تغيير كلمة مرور الطرفية"
#define json_Generate_67   "إستخراج تقرير 76"
#define json_Check_67   "إستعراض تقرير 76"
#define json_SwitchSim "تغيير الشريحة"
#define json_mnuJSON_Reupload "اعادة تحميل"

/////--------------------------------------------------------------------------------------
#endif

/////--------------------------------------------------------------------------------------

#define lang_OK	"قبول"
#define lang_THIS_TRANSACTION_ALREADY_PAID	"المعاملة مدفوعة مسبقاً"
#define lang_SYSTEM_ERROR	"خطأ بالنظام"
#define lang_BAD_REQUEST_INSUFFICIENT_PARAMETERS	"بيانات غير كافية"
#define lang_BAD_REQUEST_MISSING_VALUE	"بيانات مفقودة"
#define lang_AUTHENTICATION_FAILURE	"فشل التحقق"
#define lang_INVALID_UNIT	"وحدة غير صالحة"
#define lang_INVALID_APPLICATION_ID	"رقم تطبيق غير صالح"
#define lang_INCORRECT_TOTAL	"خطأ في المبلغ الكلي"
#define lang_INVALID_SERVICE	"خدمة غير صالحة"
#define lang_INVALID_CURRENCY	"عملة غير صالحة"
#define lang_INVALID_PAYER	"جهة دفع غير صالحة"
#define lang_INVALID_TRANSACTION_ID	"رمز معاملة غير صالح"
#define lang_INVALID_DISCOUNT_VALUE	"قيمة تخفيض غير صالحة"
#define lang_INVALID_PAYMENT_DETAILS	"التفاصيل غير صالحة"
#define lang_INVALID_PAYMENT_METHOD	"طريقة دفع غير صالحة"
#define lang_EMPTY_COMMENT	"لا يوجد تعليق"
#define lang_INVALID_DATE_FORMAT	"صيغة التاريخ غير صالحة"
#define lang_FROM_DATE_SHOULD_BE_BEFORE_TO_DATE	"التاريخ الاول اقل من الثاني"
#define lang_INVALID_PHONE	"رقم هاتف غير صالح"
#define lang_INVALID_TERMINAL_ID	"رقم طرفية غير صالح"
#define lang_INVALID_INVOICE_NO	"رقم معاملة غير صالح"
#define lang_NEW_PASSWORD_DOES_NOT_MATCH_PATTERN	"كلمة مرور غير مطابقة للنمط"
#define lang_MISMATCH_IN_NEW_PASSWORD_AND_CONFIRMATION	"كلمة مرور غير مطابقة"
#define lang_SHORT_PIN	"الرمز السري قصير"
#define lang_INSUFFICIENT_PERMISSION	"لايوجد إذن كافي	"
#define lang_INVALID_BANK_ID	"رمز البنك غير صالح"
#define lang_MAXIMUM_TOTAL_AMOUNT_DIGITS_LENGTH_IS_10	"أقصي حد للمبلغ 10 خانات"
#define lang_STAMP_SERVICE_NOT_FOUND	"لاتوجد خدمة دمغة"
#define lang_FAILURE	"خطأ"
#define lang_INVALID_DATE	"تاريخ غير صالح	"
#define lang_INCORRECT_AMOUNT	"خطأ في القيمة"
#define lang_INVALID_AMOUNT_FORMAT	"صيغة قيمة غير صالحة"
#define lang_INVALID_TOTAL_AMOUNT_FORMAT	"صيغة القيمة الكلية غير صالحة"
#define lang_THIS_AMOUNT_EXCEED_AMOUNT_DUE	"المبلغ المدفوع يتعدي المطلوب"
#define lang_INVALID_RECEIPT_ID	"رمز الايصال غير صالح"
#define lang_INVALID_RECEIPT_NO	"رقم الايصال غير صالح"
#define lang_RECEIPT_ALREADY_MARKED_FOR_DELETION	"ملحوظ للحذف"
#define lang_NO_OF_RECEIPTS_IS_INCORRECT	"عدد الايصالات غير صحيح"
#define lang_INVALID_ORNIC67_ID	"رمز أورنيك 67 غير صالح"
#define lang_ZERO_NEW_E15	"لا يوجد 15 ايصال جديد"
#define lang_SOME_RECEITS_MARKED_FOR_DELETION	"إيصالات ملحوظة للحذف"
#define lang_THIS_INVOICE_ALREADY_CANCELED	"هذه المعاملة ملغية"
#define lang_THIS_INVOICE_ALREADY_PAID	"هذه المعاملة مدفوعة"