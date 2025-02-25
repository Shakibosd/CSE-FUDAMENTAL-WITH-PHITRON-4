from django.contrib import admin
from django.urls import path, include
from django.conf.urls.static import static
from django.conf import settings

urlpatterns = [
    path('admin/', admin.site.urls),
    path('users/', include('users.urls')),
    path('flowers/', include('flowers.urls')),
    path('orders/', include('orders.urls')),
    path('admins/', include('admins.urls')),
    path('pass_change/', include('pass_change.urls')),
    path('payment/', include('payment.urls')),
]
urlpatterns += static(settings.MEDIA_URL, document_root=settings.MEDIA_ROOT)  
