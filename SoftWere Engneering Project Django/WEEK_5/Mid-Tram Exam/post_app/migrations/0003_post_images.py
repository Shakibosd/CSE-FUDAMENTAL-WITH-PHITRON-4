# Generated by Django 5.0.6 on 2024-06-16 19:18

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('post_app', '0002_alter_post_author'),
    ]

    operations = [
        migrations.AddField(
            model_name='post',
            name='images',
            field=models.ImageField(blank=True, null=True, upload_to='uploads/'),
        ),
    ]
