# Generated by Django 5.1.2 on 2024-10-24 13:14

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('authentication', '0006_profile_gender_profile_phone_number_profile_religion_and_more'),
    ]

    operations = [
        migrations.AlterField(
            model_name='profile',
            name='profile_img',
            field=models.CharField(default='', max_length=500),
        ),
    ]