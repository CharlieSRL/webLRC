Action()
{   
	lr_debug_message(1, "k");
	
	lr_output_message("Iteration number: %d" , nIterationNumber++);
	
	lr_error_message("Param used: %s",lr_eval_string("{{P_MSISDN}}"));
	
	lr_debug_message(0, "k");
	
	lr_get_attrib_string("Demo");
	
	lr_save_string(lr_get_attrib_string("Demo") ,"emp_id");
	
	lr_output_message("%s" ,lr_eval_string("{Demo}") ,"emp_id");
	
	lr_start_transaction ("TRXN01_eServiceApplication_Desktop_Launch1");
	
	lr_end_transaction ("TRXN01_eServiceApplication_Desktop_Launch1", LR_AUTO);
	
	lr_save_datetime("%m/%d/%Y %H:%M", DATE_NOW, "currDateTime");
    lr_output_message(lr_eval_string("{currDateTime}"));
	
	lr_think_time(120);
	
	return 0;
}
