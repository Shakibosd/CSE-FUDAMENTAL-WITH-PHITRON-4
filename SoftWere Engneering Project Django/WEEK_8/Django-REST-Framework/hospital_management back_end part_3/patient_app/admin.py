from django.contrib import admin
from .models import Patient

class PatientModelAdmin(admin.ModelAdmin):
    list_display = ['get_first_name', 'get_last_name', 'image', 'mobile_no']

    def get_first_name(self, obj):
        return obj.user.first_name
    get_first_name.admin_order_field = 'user__first_name'  # Allows ordering by first name
    get_first_name.short_description = 'First Name'

    def get_last_name(self, obj):
        return obj.user.last_name
    get_last_name.admin_order_field = 'user__last_name'  # Allows ordering by last name
    get_last_name.short_description = 'Last Name'
